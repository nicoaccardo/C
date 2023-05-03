#include <stdio.h>
#include "functions.h"
#include "variables.h"


int main(void) {

int scelta = 1, quantitàSale = 0;

    do {
    scelta = Menu();

    switch (scelta) {
    case 0:
        break;

    case 1:
        printf("Ci sono %d grammi di sale;\n", quantitàSale);
        break;

    case 2:
        quantitàSale = usareSale(quantitàSale);
        break;

    case 3:
        quantitàSale = aggiungereSale(quantitàSale);
        break;
        

    default:
        break;
    }

    } while (scelta!=0);

    return 0;
}