#include <stdio.h>

int main() {
    int numberOne, numberTwo;

    do{
        printf("\nWprowadź dwie liczby całkowite:\n");
        scanf("%d", &numberOne);
        scanf("%d", &numberTwo);

        if(numberOne > numberTwo){
            printf("%d jest większe od %d", numberOne, numberTwo);
        }
        else if(numberOne < numberTwo){
            printf("%d jest większe od %d", numberTwo, numberOne);
        }
        else{
            printf("\nPodane liczby są równe");
        }

    }
    while(numberOne != numberTwo);

}
