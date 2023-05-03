#include <stdio.h>
#include "variables.h"

int Menu() {

    int scelta;
    printf("\nCosa vuoi fare?\n\n");
    printf("\t1 per sapere quanti grammi di sale ci sono;\n");
    printf("\t2 per usare il sale;\n");
    printf("\t3 per riempire il barattolo;\n");
    printf("\t0 per terminare il programma;\n\n");

    scanf("%d", &scelta);

    return scelta;
}

int usareSale(int sale) {

    int saleUsato=0;

    if (sale>20){

    printf("Quanto sale vuoi utilizzare? ");
    scanf("%d", &saleUsato);

    if (saleUsato > sale) {
        printf("Non c'è abbastanza sale\n");
    } else {
        sale -= saleUsato;
    }

    } else {
        printf("Prima aggiungi del sale;\n");
    }

    return sale;
}

int aggiungereSale(int sale) {

    int saleAggiunto = 0;
    printf("Quanto sale vuoi aggiungere? ");
    scanf("%d", &saleAggiunto);

    if ((sale + saleAggiunto) > 1500)
    {
        printf("Troppo sale\n");
    } else {
        sale += saleAggiunto;
    }
    

return sale;   
}