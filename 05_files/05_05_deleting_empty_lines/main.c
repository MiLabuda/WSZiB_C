#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 256
/*5. Napisz program, który kopiuje plik tekstowy (pierwszy parametr programu ) do drugiego pliku (drugi parametr programu) w ten sposób, że przy przepisywaniu likwiduje puste linie w pliku (ma usuwać również linie, które zawierają same spacje) i na końcu skopiowanego pliku podaje liczbę usuniętych linii.*/
int main(int argc, char *argv[]){
    int              linesDeleted = 0;
    char             *filename = argv[1],
                     *newFileName = argv[2],
                     *input,
                      line[MAX];

    FILE *source = fopen(filename, "r");
    if (!source){
        printf("\nError, Unable to open the file for reading\n");

    }

    FILE *target = fopen(newFileName, "w");
    if (!source){
        printf("\nError, Unable to open the file for writing\n");
    }

    printf("How many arguments are you passing: %d\n", argc);


    ;
    while(input = fgets(line, MAX, source)){
        if (strcmp(line,"\n"  ) != 0 &&
            strcmp(line,"\r\n") != 0 &&
            strcmp(line,"\0"  ) != 0 &&
            1) {
            fputs(input, target);
        } else {
            linesDeleted++;
        }
    }

    printf("Total number of deleted lines: %d\n", linesDeleted);

    fprintf(target, "The number of deleted lines: %d\n", linesDeleted);

    fclose(source);
    fclose(target);

    return 0;
}
