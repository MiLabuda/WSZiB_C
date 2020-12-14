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
        //Wczytywanie plików in/out
    FILE *source = fopen(filename, "r");
    if (source == NULL){
        printf("\nError, Unable to open the file for reading\n");
    }
    fclose(source);
    FILE *target = fopen(newFileName, "w");
    if (target == NULL){
        printf("\nError, Unable to open the file for writing\n");
    }
    
    //Sprawdzanko czy dobrze wchodzą w konsoli
    printf("How many arguments are you passing: %d", argc);


    input = fgets(line, MAX, source);
    while (feof(source) == 0) {
        if (strcmp(input, "\n") || strcmp(input, "\r\n")) {
            linesDeleted++;
        } else {
            fputs(input, target);
        }
    }

    printf("Total number of deleted spaces: %d\n", linesDeleted);

    fprintf(target, "The number of deleted spaces: %d", linesDeleted);

    fclose(target);

    return 0;
}
