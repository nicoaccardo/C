#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include "functions.h"
#include "variables.h"

extern void shuffle(unsigned int wMazzo[][FIGURE]);
extern void deal(unsigned int wMazzo[][FIGURE], const char *wFigura[], const char *wSeme[]);
extern void coppia(unsigned int wMazzo[][FIGURE]);

int main(void) {

    //inizializza l'array mazzo
    unsigned int mazzo[SEMI][FIGURE] = {0};

    srand(time(NULL)); //seme per i numeri casuali
    shuffle(mazzo); //mescola il mazzo

    //inizializza l'array seme
    const char *seme[SEMI] = {"Cuori", "Quadri", "Fiori", "Picche"};

    //inizializza l'array figura
    const char *figura[FIGURE] = {"Asso", "Due", "Tre", "Quattro", "Cinque", "Sei", "Sette", "Otto", "Nove", "Dieci", "Jack", "Regina", "Re"};

    deal(mazzo, figura, seme); //distribuisci il mazzo

    coppia(mazzo); // Determinare se c'è una coppia
}