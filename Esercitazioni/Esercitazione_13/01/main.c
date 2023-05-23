//* Programma che rapprensenta con struct una pietanza
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#define MAXLENGHT 30

struct pietanza
{
    char nome[MAXLENGHT];
    int num_ingr;
    char **ingredienti; //! Le stringhe sono array di caratteri, quindi un array di stringhe è un array di array
    int *dosi;
    unsigned int t_cottura;
    char tipologia[10];
};

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