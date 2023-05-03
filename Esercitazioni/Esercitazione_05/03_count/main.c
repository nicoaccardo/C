#include <stdio.h>
#include "variables.h"
#include "functions.h"

int positivi=0, negativi=0, nulli=0;

int main() {

    int N, valore;

    printf("\nQuanti valori inserirai? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Inserisci un valore: ");
        scanf("%d", &valore);

        conteggio(valore);
    }

    printf("\nRisultati:\nPositivi: %d;\nNegativi: %d;\nNulli: %d;\n\n", positivi, negativi, nulli);
    return 0;
}