#include <stdio.h>

#define SIZE 10

int main() {
    float arrOne[SIZE] = {-5.5, -1.2, 0, 0, 1.4, 3.5, 6.8, 10, 10, 14.5},
        arrTwo[SIZE +1];
    float n;
    int counter = 0;

    printf("Wprowadź dowolną liczbę zmiennoprzecinkową: \n");
    scanf("%f", &n);

    for(int i = 0; i < SIZE + 1; i++){

        if(n>=arrOne[i]){
            if(i==SIZE-1){
                arrTwo[i+1]=n;
            }
            arrTwo[i]=arrOne[i];
        }
        else {
            if(counter == 0){
                arrTwo[i] = n;
                counter++;
            }
            arrTwo[i+1] = arrOne[i];
        }
    }
    for (int i = 0; i < SIZE + 1; i++){
        printf ("%0.1lf\n", arrTwo[i]);
    }
    return 0;
}
