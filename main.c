#include <stdio.h>

int main() {
    int l1, l2;
    float wynik;
    char znak;

    printf("Wpisz dzialanie(+,-,*,/): ");

    scanf("%d %c %d", &l1, &znak, &l2);

    switch (znak) {
        case '+':

            wynik = l1 + l2;

            break;


        case '-':

            wynik = l1 - l2;

            break;


        case '*':

            wynik = l1 * l2;

            break;


        case '/':
            if (l1 == 0 || l2 == 0) {
                wynik = 0;
                break;
            } else if (l1 != 0 || l2 != 0) {
                wynik = (float) l1 / l2;
                break;
            }


        default:

            printf("zle dzialanie");

            return 0;

    }
    printf("Wynik dzialania: %.1f", wynik);

    return 0;
}
