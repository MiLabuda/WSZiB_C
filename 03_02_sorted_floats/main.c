#include <stdio.h>
#define SIZE 10

int main() {
    double arrOne[SIZE] = {2.52, 5.324, 5.56, 7.362, 9.755, 11.5654, 13.45, 15.3, 17.11, 19.345},
        arrTwo[SIZE] = {2.342, 4.5236, 6.623, 8.124, 10.52, 12.133, 14.566, 16.543, 18.233, 20.543},
        arrSum[2*SIZE];
    int countOne = 0, countTwo = 0;

    for(int i = 0; i < 2 * SIZE; i++){
        if(arrOne[countOne] < arrTwo[countTwo]){
            arrSum[i] = arrOne[countOne];
            countOne++;
        }else{
            arrSum[i] = arrTwo[countTwo];
            countTwo++;
        }
    }

    for(int i = 0; i < 2 * SIZE; i++){
        printf("%0.4lf \n", arrSum[i]);
    }
    return 0;
}
