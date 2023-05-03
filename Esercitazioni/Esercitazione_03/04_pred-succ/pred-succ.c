// Programma che stampa il predecessore e il successore di un numero

#include <stdio.h>

// int successore(int x) {
//     return x += 1;
// }

// int predecessore(int x) {
//     return x -= 1;
// }

int main() {

    int n;
    printf("\nInserisci un numero: ");
    scanf("%d", &n);

    // int succ = successore(n);
    // int pred = predecessore(n);

    int succ = n + 1;
    int pred = n - 1;

    printf("\nIl successore è: %d;\n\nIl predecessore è: %d;\n\n", succ, pred);
    return 0;
}

// Ho scritto il programma sia con funzioni immediate, sia con funzioni a richiamo (commenti)

// data: 09/03/2023