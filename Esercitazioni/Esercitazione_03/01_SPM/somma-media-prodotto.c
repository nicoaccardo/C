// Programma che calcola la somma, il prodotto e la media di due numeri

#include <stdio.h>

// int somma(int x, int y) {
//     return x += y;
// }

// int prodotto(int x, int y) {
//     return x *= y;
// }

// int media(int x) {
//     return x /= 2;
// }

int main() {

    int x, y;

    printf("\nInserisci due numeri: ");
    scanf("%d %d", &x, &y);

    // int S = somma(x,y);
    // int P = prodotto(x,y);
    // int M = media(S);

    int S = x + y;
    int P = x * y;
    int M = S / 2;

    printf("\nLa somma è: %d\n\nIl prodotto è: %d\n\nLa media è: %d\n\n", S, P, M);
    return 0;
}

// Ho scritto il programma sia con funzioni immediate, sia con funzioni a richiamo (commenti)

// data: 09/03/2023

