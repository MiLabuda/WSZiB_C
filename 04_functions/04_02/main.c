#include <stdio.h>

float aritmetic (float arr[], int size);

int main() {
    int size = 0;
    float n = 0;
    char command = '0';

    while(1){
        printf("Podaj rozmiar tablicy: ");
        scanf("%d", &size);
        float arr[size];

        for(int i = 0; i < size; i++){
            printf("Wprowadź liczbe zmiennoprzecinkową do tablicy: ");
            scanf("%f", &n);
            arr[i] = n;
        }

        for(int i = 0; i < size; i++){
            printf("%.2f    ", arr[i]);
        }

        float wynik = aritmetic(arr, size);
        printf("\nSrednia arytmetyczna to: %.2f\n", wynik);

        printf("\nChcesz kontynuować? [N lub n - by zakończyć, dowolny klawisz by kontynuowac]\n");
        scanf(" %c", &command);
        if(command == 'N' || command == 'n') break;
    }
    return 0;
}

float aritmetic (float arr[], int size){
    float sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum/size;
}
