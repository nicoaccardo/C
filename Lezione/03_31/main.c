#include <stdio.h>
#include "variables.h"
#include "functions.h"
#define SIZE 6

// void stampaMenu();
// void stampaVoti(int vettore[], size_t dimensione);

int main() {

    int voti[SIZE] = {0};
    int comando;

    do
    {
        
        stampaMenu();

        scanf("%d:\n", &comando);

        switch (comando)
        {
        case 0:break;

        case 1: 
            // leggi i voti
            for (size_t i = 0; i < SIZE; i++)
            {
                printf("voti[%ld] = ", i);
                scanf("%d", &voti[i]);
            }
            break;

        case 2:
            // stampa i voti
            stampaVoti(voti, SIZE);
            break;
        
        default:
            printf("Comando non valido\n");
            break;
        }

    } while (comando != 0);
    
    printf("\nProgramma terminato\n");

    return 0;
}
