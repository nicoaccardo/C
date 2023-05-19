#include <stdio.h>
#define SIZE 50
#define NUM 3

struct persona
{
    char nome[SIZE];
    int età;
    float peso, altezza;
};

void stampa(struct persona *s)
{
    printf("\nNome: %s, \netà: %d, \npeso: %f, \naltezza: %f\n", s->nome, s->età, s->peso, s->altezza);
}

void inizializza(struct persona *i)
{
    printf("Nome:");
    scanf("%s", i->nome);
    printf("età: ");
    scanf("%d", &i->età);
    printf("peso: ");
    scanf("%e", &i->peso);
    printf("altezza: ");
    scanf("%e", &i->altezza);
}

int main(void){

    struct persona Persone[NUM];

    for (size_t i = 0; i < NUM; i++)
    {
        printf("Inserisci i dati della persona %ld\n", i);
        inizializza(&Persone[i]);
    }
    
    puts("\nEcco i valori inseriti:\n");

    for (size_t i = 0; i < NUM; i++)
    {
        printf("Dati della persona %ld\n", i);
        stampa(Persone);
    }
    

    return 0;
}