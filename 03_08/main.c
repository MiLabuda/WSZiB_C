#include <stdio.h>
#include<stdlib.h>

#define SIZE 10

int main() {
    double arrOne[SIZE] = {-5.5, -1.2, 0, 0, 1.4, 3.5, 6.8, 10, 10, 14.5},
        arrTwo[SIZE +1];
    float n;
    int counter = 0;

    printf("Wprowadź dowolną liczbę zmiennoprzecinkową: \n");
    scanf("%f", &n);

    for(int i = 0; i < SIZE + 1; i++){
       if(arrOne[counter] < n || arrOne[counter] > n) {
           arrTwo[i] = arrOne[counter];
           counter++;
       }else if (arrOne[counter] < n && arrOne[counter + 1] > n){
           arrTwo[i] = n;
       }
    }

    for(int i = 0; i < SIZE + 1; i++){
        printf("%0.1lf\n", arrTwo[i]);
    }
    return 0;
}
