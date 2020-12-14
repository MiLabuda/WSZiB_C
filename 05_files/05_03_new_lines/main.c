#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]){
    int spaces = 0;
    char *filename = argv[1];
    char input;

    FILE *fptr;
    fptr = fopen(filename, "r");

    if (fptr == NULL){
        printf("\nError, Unable to open the file for reading\n");
    }

    while((input = fgetc(fptr)) != EOF){
        if (input == 32){
            spaces++;
        }
    }

    fclose(fptr);
    printf("Total number of upper case letters: %d\n", spaces);

    FILE *fptr2;
    fptr2 =fopen("how_many_spaces", "w");
    fprintf(fptr2, "The number of spaces: %d", spaces);

    fclose(fptr2);

    return 0;
}
