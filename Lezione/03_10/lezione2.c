#include <stdio.h>

int main() {

    float x, y;

    printf("\nInserisci due numeri: ");
    scanf("%f %f", &x, &y);

    if (x==y) {
        printf("\nI numeri sono uguali.\n\n");
    } 

    else if (x>y) {
        printf("\nIl maggiore è: %f\n\n", x);
    } 

    else {
        printf("\nIl maggiore è: %f\n\n", y);
    }
}