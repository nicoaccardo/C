#include <stdio.h>

int main(void) {

    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        // Stampa la riga i-esima
        for (int j = 0; j <= n-1; j++) {

            // Stampa l'elemento
            printf("%d", j);

            if (j<n-i) {
                printf("?");
            } else {
                printf("\n");
            }         
        }
    }
    return 0;
}