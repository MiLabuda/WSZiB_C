#include<stdio.h>
#define SIZE 40

int main(int argc,char *argv[]){
    int counter = 1;
    char *filename = argv[1];
    char input = 0;

    FILE *fptr;
    fptr = fopen(filename, "w");

    while(counter <= SIZE){
        printf("Wprowadź znak: \n");
        scanf(" %c", &input);
        if(input != '*' && input != '.'){
            if(counter%5 == 0){
                fprintf(fptr,"%c\n", input);
                counter++;
            }else{
                fprintf(fptr,"%c", input);
                counter++;
            }
        }
    }
    return 0;
}
