//! Scrivere una funzione ricorsiva che dato un array di numeri reali restituisca il massimo valore
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *array, dim;

    printf("Inserire la dimensione: ");
    scanf("%d", &dim);

    array = (int *) calloc(dim, sizeof(int));
    // array = (int *) malloc(dim * sizeof(int));
    for (int i = 0; i < dim; i++)
    {
        scanf("%d", &array[i]);
    }
    

    free(array);

    return 0;
}