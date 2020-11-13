#include <stdio.h>
#define SIZE 21

int toThePowerOf (int number, int p);

int main() {
    int sasa;
    int array[SIZE];

    printf("Program poda 20 najbliższych potęg podanej liczby: ");
    scanf("%d", &sasa);

    for (int i = 0; i < SIZE; i++){
        array[i] = toThePowerOf(sasa, i);
        printf("%d ", array[i]);
    }
}

int toThePowerOf (int number, int p) {
    if (p == 0){
        return 1;
    }
    else if (p == 1) {
        return number;
    } else {
    int s = toThePowerOf(number, (p-1));
    return number * s;
    }
}