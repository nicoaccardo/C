#include <stdio.h>
#include "variables.h"

int main() {

    float M, k, serie;
    printf("Inserisci un numero intero: ");
    scanf("%f", &M);

    for (k = 1; k <= M; ++k)
    {
        serie += 1/k;
    }
    printf("La somma della serie è: %f\n", serie);

    return 0;
}