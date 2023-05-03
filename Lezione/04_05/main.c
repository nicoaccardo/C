#include <stdio.h>
#define SIZE 100

void valoriArray(int dim, int array[]);
int dimensione(size_t);
void min(int a[], int b[], int min[], int dim);
void max(int a[], int b[], int max[], int dim);

int main() {

    size_t dim;
    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int arrayMin[SIZE] = {0};
    int arrayMax[SIZE] = {0};
    float arrayMedia[SIZE] = {0};

    dim = dimensione(SIZE);

    printf("Inserisci i valori del primo array:\n");
    valoriArray(dim, array1);

    printf("Inserisci i valori del secondo array:\n");
    valoriArray(dim, array2);

    min(array1, array2, arrayMin, dim); 
    max(array1, array2, arrayMax, dim);
    // media();    

    return 0;
}

int dimensione(size_t) {

    int dim;
    printf("quanti valori inserirai? ");
    scanf("%d", &dim);

    return dim;
}

void valoriArray(int dim, int array[]) {

    for (size_t i = 0; i < dim; i++){
        printf("valore[%ld]: ", i);
        scanf("%d", &array[i]);
    }
}

void min(int a[], int b[], int min[], int dim) {

    for (size_t i = 0; i < dim; i++) {
        if (a[i] <= b[i]) {
            min[i] = a[i];
        } else {
            min[i] = b[i];
        }
    } 
}

void max(int a[], int b[], int max[], int dim) {

    for (size_t i = 0; i < dim; i++)
    {
        if (a[i] >= b[i]) {
            max[i] = a[i];
        } else {
            max[i] = b[i];
        }
    }   
}
