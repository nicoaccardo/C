#include <stdio.h>
#include <stdlib.h>
#include "variables.h"
#include "functions.h"

void stampaMenu(char *x){

    puts("Cosa vorresti fare?");
    puts("\ta) Inserire una nuova pietanza");
    puts("\tb) Visualizzare gli ingredienti e le dosi di una pietanza");
    puts("\tc) Visualizzare l'elenco delle pietanze in base alla tipologia");
    puts("\td) Visualizzare il nome delle pietanze che contengono un certo ingrediente");
    puts("\te) Visualizzare l'elenco delle pietanze con un tempo di cottura minore di un valore");
    scanf("%c", x);
}

void inserirePietanza(Pietanza *p, int n){

    p->num_ingr = (int *) malloc(n * sizeof(int));

    p->nomi = (char **) malloc(n * sizeof(char));
        for (size_t i = 0; i < n; i++){
            p->nomi[i] = (char*) malloc(MAXLENGHT * sizeof(char));
        }

    printf("Inserisci il nome della pietanza: ");
    scanf(" %[^\n]", p->nomi[n]);

    printf("Quanti ingredienti servono? ");
    scanf(" %d", &p->num_ingr[n]);

    allocazioneDinamica(p, n);

    letturaValori(p, n);

    // stampaValori(p);
}

void allocazioneDinamica(Pietanza *p, int n){

    p->t_cottura = (int *) malloc(n * sizeof(int));

    p->dosi = (int **) malloc(n * sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        p->dosi[i] = (int *) malloc(p->num_ingr[i] * sizeof(int));
    }

    p->tipologia = (char **) malloc(n * sizeof(char));
        for (size_t i = 0; i < n; i++)
        {
            p->tipologia[i] = (char*) malloc(10 * sizeof(char));
        }
        
    p->ingredienti = (char ***) malloc(n * sizeof(char));
    for (size_t i = 0; i < n; i++)
    {
        p->ingredienti[i] = (char **) malloc(p->num_ingr[i] * sizeof(char));
            for (size_t j = 0; j < p->num_ingr[i]; j++){
                p->ingredienti[i][j] = (char*) malloc(MAXLENGHT * sizeof(char));
            } 
    }
    
    
}

void letturaValori(Pietanza *p, int n){

    for (size_t i = 0; i < p->num_ingr[n]; i++)
    {
        puts("Inserisci il nome dell'ingrediente");
        scanf(" %[^\n]", p->ingredienti[n][i]);
        puts("Inserisci la sua dose in grammi:");
        scanf("%d", &p->dosi[n][i]);
    }

    printf("Inserisci il tempo di cottura in minuti: ");
    scanf("%d", &p->t_cottura[n]);
    printf("Inserisci la tipologia di piatto (antipasto, primo, etc): ");
    scanf(" %[^\n]", p->tipologia[n]);

}

// void stampaValori(Pietanza *p){

//     printf("\nNome: %s\n", p->nome);
//     puts("\nIngredienti:");
//     for (size_t i = 0; i < p->num_ingr; i++)
//     {
//         printf("\t%s ", p->ingredienti[i]);
//         printf("%dgr\n", p->dosi[i]);
//     }
//     printf("\nTempo di cottura: %d min\n", p->t_cottura);
//     printf("È un: %s\n\n", p->tipologia);
// }

void deAllocazione(Pietanza *p, int n){

    free(p->num_ingr);
    free(p->t_cottura);

    for (size_t i = 0; i < n; i++)
    {
        free(p->dosi[i]);
    }
    free(p->dosi);

    for (size_t i = 0; i < n; i++)
    {
        free(p->nomi[i]);
    }
    free(p->nomi);

    for (size_t i = 0; i < n; i++)
    {
        free(p->tipologia[i]);
    }
    free(p->tipologia);
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < p->num_ingr[i]; j++)
        {
            free(p->ingredienti[i][j]);
        }
        free(p->ingredienti[i]);
    }
    free(p->ingredienti);

}
