#include <stdio.h>

int main() {
    char previous, current = 0;

    do {
        previous = current;

        printf("Podaj znak:");
        scanf(" %c", &current);

    }
    while(previous != '*' || current != '.');

    return 0;
}