#include <stdio.h>

//* a) Scrivere l'intestazioe per una funzione chiamata exchange che riceve come parametri due puntatori ai numeri in virgola mobile x e y e non restituisce alcun valore
void exchange(float *x, float *y);
/*
* c) Scrivete l'intestazione per una funzione chiamata evaluate che restituisce un intero e che riceve come parametri l'intero x 
* e un puntatore alla funzione poly. La funzione poly riceve un parametro intero e restituisce un intero.*/
int evaluate (int x, int (*poly)(int));


int main(void){

    return 0;
}

//* b) Scrivere il prototipo di funzione per la funzione di cui alla voce a)
void exchange(float *x, float *y){}

//* d) Scrivere il prototipo di funzione per la funzione di cui alla voce c)
int evaluate (int x, int (*poly)(int)){}