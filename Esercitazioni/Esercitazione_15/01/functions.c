#include <stdlib.h>
#include <variables.h>
void printMenu(char *optionPtr) {

    puts("Cosa vuoi fare?");
    puts("\ta) Inserire un nuovo elemento nella lista in maniera ordinata");
    puts("\tb) Contare quante volte un numero è presente nella lista");
    puts("\tc) Cancellare un elemento a partire a partire dal suo valore");
    puts("\td) Modificare la lista, impostando ogni elemento al quadrato del suo attuale valore");
    puts("Inserisci 0 per terminare il programma");
    scanf("%c", optionPtr);
}

void newElement(Nodo *head) {

    // Controllo se la testa non ha già un valore e in caso alloco la memoria
    if (head == NULL)
    {
        head = (Nodo *) malloc(sizeof(Nodo));
        scanf("%d", head->next);
        head->next = NULL;
    }

    Nodo *new = NULL;
    new = (Nodo *) malloc(sizeof(Nodo));
    scanf("%d", new->next);

    if (new->next < head->next)
    {
        /* code */
    }
    
        
}