#include <stdio.h>

int main() {
    char character, answer;

    do{
        printf("\nWprowadz znak: \n");
        //fflush(stdin);
        scanf(" %c", &character);

        if (character == '*') {
            printf("Zakończyć program? ['T' lub 't' by zaakceptować]\n");
            //fflush(stdin);
            scanf(" %c", &answer);
        }
        else{
            printf("%c", character);
        }
    }
    while(answer != 'T' && answer != 't');

}
