#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

void allocazioneDinamica(Pietanza *p){

    p->dosi = (int *) calloc(p->num_ingr, sizeof(int));
    p->ingredienti = (char **) calloc(p->num_ingr, sizeof(char));
    for (size_t i = 0; i < p->num_ingr; i++)
    {
        p->ingredienti[i] = (char*) calloc(MAXLENGHT, sizeof(char));
    }
}

void letturaValori(Pietanza *p){

    for (size_t i = 0; i < p->num_ingr; i++)
    {
        puts("Inserisci il nome dell'ingrediente");
        scanf(" %[^\n]", p->ingredienti[i]);
        puts("Inserisci la sua dose in grammi:");
        scanf("%d", &p->dosi[i]);
    }

    printf("Inserisci il tempo di cottura in minuti: ");
    scanf("%d", &p->t_cottura);
    printf("Inserisci la tipologia di piatto (antipasto, primo, etc): ");
    scanf(" %[^\n]", p->tipologia);

}

void stampaValori(Pietanza *p){

    printf("\nNome: %s\n", p->nome);
    puts("\nIngredienti:");
    for (size_t i = 0; i < p->num_ingr; i++)
    {
        printf("\t%s ", p->ingredienti[i]);
        printf("%dgr\n", p->dosi[i]);
    }
    printf("\nTempo di cottura: %d min\n", p->t_cottura);
    printf("È un: %s\n\n", p->tipologia);
}

void deAllocazione(Pietanza *p){

    for (size_t i = 0; i < p->num_ingr; i++)
    {
        free(p->ingredienti[i]);
    }
    free(p->ingredienti);
}