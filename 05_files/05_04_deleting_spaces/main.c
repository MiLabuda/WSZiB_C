#include<stdio.h>
#include<ctype.h>
#define MAX 100

int main(int argc, char *argv[]){
    int spacesDeleted = 0;
    char *filename = argv[1],
    newFileName[MAX];
    char input,
        prev;
    FILE *source, *target;

    source = fopen(filename, "r");

    if (source == NULL){
        printf("\nError, Unable to open the file for reading\n");
    }

    printf("Enter new filename: \n");
    scanf("%s", &newFileName);
    printf("%s", newFileName);

    target = fopen(newFileName, "w");
    if (target == NULL){
        printf("\nError, Unable to open the file for writing\n");
    }


        if (input == 32 && prev == 32){
        spacesDeleted++;
        }else{
            fputc(input, target);
        }
        prev = input;
    }

    printf("Total number of deleted spaces: %d\n", spacesDeleted);

    fprintf(target, "The number of deleted spaces: %d", spacesDeleted);

    fclose(source);
    fclose(target);

    return 0;
}
