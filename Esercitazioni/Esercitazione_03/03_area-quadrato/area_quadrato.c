// Programma che calcola l'area di un quadrato avendo il suo perimetro

#include <stdio.h>

// int lato(int x) {
//     return x /= 4;
// }

// int area(int x) {
//     return x *= x;
// }

int main() {

    float p;
    printf("\nInserisci il perimetro del quadrato: ");
    scanf("%f", &p);

    // int l = lato(p);
    // int A = area(l);

    float l = p / 4;
    float A = l * l;

    printf("\nL\'area del quadrato è: %.2f\n\n", A);
    return 0;
}

// Ho scritto il programma sia con funzioni immediate, sia con funzioni a richiamo (commenti)

// data: 09/03/2023
