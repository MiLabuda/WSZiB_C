#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]){
    int upper_case = 0,
        lower_case = 0;
    char *filename = argv[1];
    char input;


    FILE *fptr;
    fptr = fopen(filename, "r");

    if (fptr == NULL){
        printf("\nError, Unable to open the file for reading\n");
    }

    while((input = fgetc(fptr)) != EOF){
        if (isupper(input)){
            upper_case++;
        }
        else if (islower(input)){
            lower_case++;
        }
    }
    fclose(fptr);
    printf("Total number of upper case letters: %d\n", upper_case);
    printf("Total number of lower case letters: %d\n", lower_case);

    return 0;
}
