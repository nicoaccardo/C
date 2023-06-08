//! Scrivere una funzione ricorsiva che dato un array di numeri reali restituisca il massimo valore
#include <stdio.h>
#include <stdlib.h>

int maxvalue(int *array, int dim);

int main(void){

    int *array, dim, max;

    printf("Inserire la dimensione: ");
    scanf("%d", &dim);
    
    if (dim <= 0)
    {
        puts("Errore, inserisci una dimensione maggiore di 0");
        return -1;
    }
    

    // array = (int *) calloc(dim, sizeof(int));
    array = (int *) malloc(dim * sizeof(int));
    for (int i = 0; i < dim; i++)
    {
        scanf("%d", &array[i]);
    }
     //! SBAGLIATO
    max = maxvalue(array, dim);

    printf("Il valore massimo è: %d", max);

    free(array);

    return 0;
}

int maxvalue(int *array, int dim)
{
    int max1, max2;

    if (dim==0)
    {
        return 0;
    }

    if (dim==1)
    {
        max2 = array[dim-1];
        return max2;
    }

    if (array[dim-1]>array[dim-2]) 
    {
        max1 = array[dim-1];
        max2 = maxvalue(array, dim-1);
        if (max1 < max2)
        {
            return max2;
        }
        else
        {
            return max1;
        }
    }

    
    
    
}
