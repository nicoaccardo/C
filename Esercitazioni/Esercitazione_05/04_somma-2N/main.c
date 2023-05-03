// Programma che:
// somma gli interi da N a 2N, se N è positivo;
// somma gli interi da 2N a N, se N è negativo
#include <stdio.h>
#include "variables.h"
#include "functions.h"

int risultato = 0, N;

int main() {

    N = lettura_valore();

    if (N>0) {
        risultato = somma_positivi(N);
    } else {
        risultato = somma_negativi(N);
    }

    printf("Il risultato è: %d\n", risultato);
    
}