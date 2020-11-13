#include <stdio.h>
#define SIZE 10

int main() {
    int arrOne[SIZE] = {1, 4, 5, 8, 14, 18, 19, 22, 36, 56},
        arrTwo[SIZE] = {3, 6, 8, 22, 25, 29, 31, 52, 63, 86},
        arrThree[2* SIZE],
        counterOne = 0,
        counterTwo = 0,
        check = 0;

    for(int i = 0; i < 2* SIZE; i++){

        if(check == 0){
            arrThree[i] = arrOne[counterOne];
            counterOne++;
            if(i%2 != 0){
                check = 1;
            }
        }
        else{
            arrThree[i] = arrTwo[counterTwo];
            counterTwo++;
            if(i%2 != 0){
                check = 0;
            }
        }
    }

    for(int i = 0; i < 2 * SIZE; i++){
        printf("%d ", arrThree[i]);
    }

}
