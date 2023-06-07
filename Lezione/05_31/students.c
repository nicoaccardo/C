#include <stdio.h>
#define MAXLENGHT 30

struct studenti {

    unsigned int matricola;
    char nome[MAXLENGHT];
    char cognome[MAXLENGHT];
    struct studenti *next;
     
};

typedef struct studenti Studenti;

int main(void){
    
    Studenti *lista = NULL;

    

    return 0;
}