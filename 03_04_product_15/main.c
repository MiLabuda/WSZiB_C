#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE] = {5, 2, 2, 3, 3, 7, 1, 2, 3, 1},
        even[SIZE],
        count = 0,
        mult = 0;

    for(int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0){
            even[count] = arr[i];
            count++;
        }
    }

    for(int j = 0; j < count; j++){
        if(j == 0){
            mult += even[j];
        }else{
            mult *= even[j];
        }
    }

    printf("Iloczyn sumy wyrazów parzystych: %d\n", mult);
    return 0;
}
