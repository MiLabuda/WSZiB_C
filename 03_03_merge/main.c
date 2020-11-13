#include <stdio.h>
#define SIZE 19

int main() {
    char arrOne[] = {'c','g', 'h', 'j', 'k', 'f', 'r', 't', 'y', 'h'},
        arrTwo[] = {'F','H', 'D', 'B', 'N', 'R', 'U', 'K', 'W', 'S'},
        arrSum[SIZE];

    int countOne = 0,
        countTwo = 0;

    for(int i = 0; i <= SIZE; i++){
        if(i%2 == 0){
            arrSum[i] = arrOne[countOne];
            countOne++;
        }
        else if(i%2 != 0){
            arrSum[i] = arrTwo[countTwo];
            countTwo++;
        }
    }
    for(int j = 0; j <=SIZE; j++){
        printf(" %c", arrSum[j]);
    }

    return 0;
}
