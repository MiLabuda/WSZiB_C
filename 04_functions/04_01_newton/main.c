#include <stdio.h>

float newton(int n, int k);

int main() {
    int n = 0,
        k = 0;

    printf("Obliczanie symbolu newtona: \n"
           "Wprowadź n: \n");
    scanf("%d", &n);
    printf("Wprowadź k: \n");
    scanf("%d", &k);

    printf("Symbol Newtona wynosi: \n");
    if(k == 0 || k ==n){
        printf("1");
    }else{
        printf("%f", newton(n, k));
    }
    return 0;
}
float newton(int n, int k){

    float symbol = 1;

    for(int i = 1; i <= k; i++){
        symbol = symbol * (n - i + 1)/ i;
    }

    return (float) symbol;
}