#include <stdio.h>

int main(void){

    float number1=7.3, number2;

    //* a) Definire la variabile fPtr come puntatore a un oggetto di tipo float
    float *fPtr;

    //* b) Assegnare l'indirizzo della variabile number1 alla variabile puntatore fPtr
    fPtr = &number1;

    //* c) Stampare il valore dell'oggetto puntato
    printf("%.1f\n", *fPtr);

    //* d) Assegnare il valore dell'oggetto puntato da fPtr alla variabile numbers2
    number2 = *fPtr;

    //* e) Stampare il valore di number2
    printf("%.1f\n", number2);

    //* f) Stampare l'indirizzo di number1. Usate lo specificatore di conversione %p
    printf("%p\n", &number1);

    //* g) Stampare l'indirizzo memorizzato in fPtr. Usare lo specificatore di conversione %p. Il valore stampato è lo stesso di number1?
    printf("%p\n", fPtr);

    return 0;
}