#include <stdio.h>
#define SIZE 4

int main() {

    int array[SIZE]={10, 20, 30, 40};
    // Definisco il puntatore che punta al primo elemento dell'array
    int* ptr = array;

    // Versione 1: notazione degli array sul nome dell'array
    for (size_t i = 0; i < SIZE; i++){
        printf("elemento[%ld]: %d\n", i, array[i]);
    }

    // Versione 2: aritmetica dei puntatori al nome dell'array
    for (size_t i = 0; i < SIZE; i++){
        printf("elemento[%ld]: %d\n", i, *(array+i));
    }

    // Versione 3: notazione degli array ad una variabile puntatore che punta al primo elemento dell'array
    for (size_t i = 0; i < SIZE; i++){
        printf("elemento[%ld]: %d\n", i, ptr[i]);
    }

    // Versione 4: aritmetica dei puntatori ad una variabile puntatore che punta al primo elemento dell'array
    for (size_t i = 0; i < SIZE; i++){
        printf("elemento[%ld]: %d\n", i, *(ptr+i));
    }

    return 0;
}