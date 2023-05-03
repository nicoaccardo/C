#include <stdio.h>
#include "variables.h"
#include "functions.h"

int n1 = 0, n2 = 1, N, risultato;

int main() {

    N = lettura();

    printf("%s", "La serie di Fibonacci è: 1 ");

    for (int i = 1; i < N; i++) {
        stampa(n1, n2);
        n1=n2;
        n2=risultato;
    }
    
    printf("\n");
    return 0;
}