#include <stdio.h>
#include "variables.h"
#include "functions.h"

int lettura() {

    printf("Inserisci un valore intero N: ");
    scanf("%d", &N);

    return N;
}

void stampa(int n1, int n2) {
    risultato = n1 + n2;
    printf("%d ", risultato);
}