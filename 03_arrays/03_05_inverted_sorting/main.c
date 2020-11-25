#include <stdio.h>

int main()
{
    int tablica[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    // printf("podaj rozmiar tablicy");
    //scanf("%d", &n);

   for (int i = 0; i < (n/2); i++) {
   int tmp = tablica[i];
   tablica[i] = tablica[n-1-i];
   tablica[n-1-i] = tmp;
   }

    for (int i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }

    return 0;
}
