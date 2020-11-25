#include <stdio.h>

int main() {
    char a, b;

    printf("Wczytaj pierwszy znak:\n");
    scanf(" %c", &a);

    printf("Wczytaj drugi znak: \n");
    scanf(" %c", &b);

    printf("%c%c%c%c%c%c%c%c%c%c\n", a,a,a,a,a,a,a,a,a,a);
    printf("%c%c%c%c%c%c%c%c%c%c\n", a,a,a,a,a,a,a,a,a,a);
    printf("%c%c      %c%c\n", a,a,a,a);
    printf("        %c%c\n", a,a);
    printf("       %c%c\n", a,a);
    printf("       %c%c\n", a,a);
    printf("       %c%c\n", a,a);
    printf("       %c%c\n", a,a);
    printf("       %c%c\n", a,a);
    printf("%c%c      %c%c\n", a,a,a,a);
    printf("%c%c      %c%c\n", a,a,a,a);
    printf(" %c%c    %c%c%c\n", a,a,a,a,a);
    printf(" %c%c%c%c%c%c%c\n", a,a,a,a,a,a,a);
    printf("   %c%c%c%c%c  \n\n", a,a,a,a,a);


    printf("   %c%c%c%c   \n", b, b, b, b);
    printf("  %c%c%c%c%c%c  \n", b, b, b, b, b, b);
    printf(" %c%c%c%c \n", b, b, b, b);
    printf("%c%c    %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf("%c%c      %c%c\n", b, b, b, b);
    printf(" %c%c    %c%c \n", b, b, b, b, b, b);
    printf("  %c%c%c%c%c%c  \n", b, b, b, b);
    printf("   %c%c%c%c   \n", b, b, b, b);


    return 0;

}
