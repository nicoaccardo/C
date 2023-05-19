#include "variables.h"
#include <stdio.h>
#include <stdlib.h>

//mescola le carte nel mazzo 
void shuffle(unsigned int wMazzo[][FIGURE]){

    //per ogni carta, scegli a caso un elemento dell'array nel mazzo
    for (size_t carta = 1; carta <= CARTE; carta++)
    {
        size_t riga; //numero della riga
        size_t colonna; //numero della colonna

        //scegli una locazione a caso non occupata
        do
        {
            riga = rand() % SEMI;
            colonna = rand() % FIGURE;
        } while (wMazzo[riga][colonna] != 0);

        //inserisci il numero d'ordine della carta nell'elemento scelto
        wMazzo[riga][colonna] = carta;   
    }
}

// distribuisci le carte nel mazzo
void deal(unsigned int wMazzo[][FIGURE], const char *wFigura[], const char *wSeme[]) {

    // distribuisci ognuna delle carte
    for (size_t carta = 1; carta <= CARTE; carta++)
    {
        //effettua un ciclo lungo le righe di wMazzo
        for (size_t riga = 0; riga < SEMI; riga++)
        {
            // effettua un ciclo lugno le colonne di wMazzo
            for (size_t colonna = 0; colonna < FIGURE; colonna++)
            {
                // se l'elemento contiene la carta corrente, stampala
                if (wMazzo[riga][colonna] == carta)
                {
                    printf("%5s di %-8s%c", wFigura[colonna], wSeme[riga], carta % 2 == 0 ? '\n' : '\t'); //formato a 2 colonne
                }
            }
        }
    }
}

void coppia(unsigned int wMazzo[][FIGURE]){

    for (size_t carta = 1; carta <= CARTE; carta++)
    {
        for (size_t riga = 0; riga < SEMI; riga++)
        {
            for (size_t colonna = 0; colonna < FIGURE; colonna++)
            {
                if (wMazzo[riga][colonna] == carta)
                {
                        unsigned int coppia=0;

                    for (size_t coppiaRiga = 0; coppiaRiga < SEMI; coppiaRiga++)
                    {
                        if (wMazzo[coppiaRiga][colonna] != 0)
                        {
                            coppia++;
                        }
                        
                    }
                        if (coppia==2)
                        {
                            printf("\nHai una coppia\n");
                            return;
                        }  
                }
            }
        }
    }
    

    
}