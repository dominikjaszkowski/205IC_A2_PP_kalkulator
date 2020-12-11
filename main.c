#include <stdio.h>

int main() {
    float l1,l2,wynik;
    char znak;

    printf("Wpisz dzialanie(+,-,*,/): ");

    scanf("%f %c %f",&l1,&znak,&l2);

    switch(znak) {
        case '+':
            {

            wynik = l1 + l2;

            break;
        }

        case '-':
            {

            wynik = l1 - l2;

            break;
        }

        case '*':
            {

            wynik = l1 * l2;

            break;
        }

        case '/':
            {

            wynik = l1 / l2;

            break;
        }

        default:
            {

            printf("zle dzialanie");

            return 0;
        }
    }
    printf("Wynik dzialania: %.1f",wynik);

    return 0;
}
