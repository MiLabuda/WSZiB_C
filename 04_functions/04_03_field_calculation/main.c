#include <stdio.h>
#define PI 3.14

int rectangleField(void);
float roundField(void);
int triangleField(void);

int main() {
    char command = '0';
    printf("Hello, World!\n");
    while(command != 'K'){
        printf("Kalkulator pól powierzchni:\n"
               "[1] - Pole powierzchni prostokątu: \n"
               "[2] - Pole powierzchni koła: \n"
               "[3] - Pole powierzchni trójkąta: \n"
               "[K] - Wyjście\n\n");
        scanf(" %c", &command);

        if(command == '1'){
//            printf("Jedynka\n\n");
            rectangleField();
        }else if(command == '2'){
//            printf("Dwójka\n\n");
            roundField();
        }else if(command == '3'){
//            printf("Trójka\n\n");
            triangleField();
        }else if(command == 'K'){
            printf("Koniec pracy programu");
        }else{
            printf("Niewłaściwa komenda\n\n");
        }
    }

    return 0;
}


int rectangleField(void){
    int a = 0,
        b = 0;
    printf("Obliczanie pola prostokąta: \n"
           "Wprowadź długość oraz szerokość prostokata [metry]: \n");
    scanf("%d%d", &a, &b);
    printf("\nPole prostokąta to: %d m2\n\n", a*b);
}

float roundField(void){
    float r = 0;
    printf("Obliczanie pola koła: \n"
           "Wprowadź promień okręgu: \n");
    scanf("%f",&r);

    printf("\nPole koła to: %.2f m2\n\n", 2 * r * PI);
}

int triangleField(void){
    int a = 0,
        h = 0;
    printf("Obliczanie pola trójkąta: \n"
           "Wprowadź podstawę i wysokość trójkąta: \n");
    scanf("%d%d",&a, &h);

    printf("\nPole trójkąta to: %d m2\n\n", (a*h)/2);
}