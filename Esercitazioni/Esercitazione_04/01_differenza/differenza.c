// Programma che dati due numeri, calcola la differenza tra il maggiore e il minore
#include <stdio.h>

int main() {

    float x, y, max, min, differenza;

    printf("\nInserisci due numeri: ");
    scanf("%f %f", &x, &y);

    if (x>y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }

    differenza = max - min;

    printf("\nLa loro differenza è: %.2f\n\n", differenza);
    return 0;
    
}