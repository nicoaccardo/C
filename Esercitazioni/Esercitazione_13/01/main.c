//* Programma che rapprensenta con struct una pietanza
#include <stdio.h>
#include <stdlib.h>
#include "variables.h"
#include "functions.h"

int main(void){

    struct pietanza piatto;

    printf("Inserisci il nome della pietanza: ");
    scanf("%[^\n]", piatto.nome);

    printf("Quanti ingredienti servono? ");
    scanf("%d", &piatto.num_ingr);

    allocazioneDinamica(&piatto);

    letturaValori(&piatto);

    stampaValori(&piatto);
    
    deAllocazione(&piatto);
    return 0;
}