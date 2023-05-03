#include <stdio.h>
#include "variables.h"
#include "functions.h"

int lettura_valore() {

    // int x;
    printf("Inserisci un valore intero N: ");
    scanf("%d", &N);

    return N;
}

int somma_positivi(int x) {
    
    // int risultato = 0;
    for (int i = x; i <= 2*x; i++)
    {
        risultato += i;
    }
    
    return risultato;
}

int somma_negativi(int x) {

    for (int i = 2*x; i <= x; i++)
    {
        risultato += i;
    }
    
    return risultato;
}