#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char    *filename = argv[1],
            *newFileName = argv[2],
            input;
    int counter = 1,
        total_lines = 0;

    FILE *source = fopen(filename, "r");
    if (!source){
        printf("\nError, Unable to open the file for reading\n");
    }

    FILE *target = fopen(newFileName, "w");
    if (!source){
        printf("\nError, Unable to open the file for writing\n");
    }

    printf("How many arguments are you passing: %d\n", argc);

    while((input = fgetc(source)) != EOF){
        if (input != 10){
            if (counter%21 == 0) {
                fputc('*', target);
                fputc('\n', target);
                total_lines++;
            }else {
                fputc(input, target);
            }
            counter++;
        }else{
            continue;
        }
    }

    printf("The total number of lines: %d\n", total_lines);

    fprintf(target, "The total number of lines: %d\n", total_lines);

    fclose(source);
    fclose(target);

    return 0;
}
