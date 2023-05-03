#include <stdio.h>

void stampaMenu() {

    printf("\n\tPer inserire i voti: 1\n");
    printf("\tPer stampare i voti dal primo all'ultimo: 2\n");
    printf("\tPer stampare i voti dall'ultimo al primo: 3\n");
    printf("\tPer stampare voto massimo e minimo: 4\n");
    printf("\tPer stampare il voto medio: 5\n\n");
    printf("\tPer uscire dal programma: 0\n");
    printf("\nCosa vuoi fare? ");
}

void stampaVoti(int vettore[], unsigned int dimensione) {

    printf("I voti sono: ");
    for (size_t i = 0; i < dimensione; i++)
    {
        printf("%d; ", vettore[i]);
    }
    printf("\n");
    
}