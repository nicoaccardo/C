#include <stdio.h>

int main(void) {

    float vendite_annuali, vendite_quotidiane;
    char anno_bisestile;

    // chiedo i dati all'utente
    printf("\nInserisci le vendite annuali: ");
    scanf("%f", &vendite_annuali);

    printf("Inserisci 1 se l'anno è bisestile, 0 altrimenti: ");
    scanf("%hhd", &anno_bisestile);

    // costrutto condizionale
    if(anno_bisestile) {

        vendite_quotidiane = vendite_annuali / 366;

    } else {
        vendite_quotidiane = vendite_annuali / 365;
    }

    printf("\nLe vendite giornaliere sono: %.2f\n\n", vendite_quotidiane);

    return 0;
}