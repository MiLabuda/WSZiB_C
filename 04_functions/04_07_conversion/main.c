#include <stdio.h>
#define SIZE 10

int arr[SIZE];

void conversion(void);

int main() {
    conversion();
    return 0;
}

void conversion(void) {
    int number = 0,
        rest = 0;
    char letter = '0';

    printf("Wprowadź liczbę dziesiętną całkowitą: ");
    scanf("%d", &number);

    while (number >= 10) {
        rest = number % 16;
        number /= 16;
        switch (rest) {
            case 10:
                letter = 'A';
                break;
            case 11:
                letter = 'B';
                break;
            case 12:
                letter = 'C';
                break;
            case 13:
                letter = 'D';
                break;
            case 14:
                letter = 'E';
                break;
            case 15:
                letter = 'F';
                break;
            default:
                rest = rest;
        }

        if(rest >= 10){
            printf("%c", letter);
        }else if(rest < 10){
            printf("%d", rest);
        }
        else if(number >= 10)

    }
}
