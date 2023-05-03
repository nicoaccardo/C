#include <stdio.h>
#include <math.h>
#define SIZE 100

extern void crescente(int array[], int size);
extern void norma(int array[], int size);

int main() {

    int size, opzione, array[SIZE]={0};

    do{
        printf("Inserisci dimensione array: ");
        scanf("%d", &size);
        if (size>100){
            printf("Inserisci valore minore di 100");
        }
    } while (size>100);

    do {
        printf("1 per inserire nuovi valori nel vettore\n");
        printf("2 per calcolare la norma del vettore\n");
        printf("3 per verificare se gli elementi del vettore sono in ordine crescente\n");
        printf("0 per terminare il programma\n");

        scanf("%d", &opzione);


        switch (opzione)
        {
        case 1:
            for (size_t i = 0; i < size; i++){
                printf("array[%ld]: ", i);
                scanf("%d", &array[i]);
            }
            break;

        case 2:
            norma(array, size);
            break;

        case 3:
            crescente(array, size);
            break;
        
        default:
            break;
        }
    } while (opzione!=0);
}

void norma(int array[], int size) {

    float norma=0;
    for (size_t i = 0; i < size; i++)
    {
        norma+= pow(array[i], 2);
    }

    norma = sqrt(norma);
    printf("%f\n", norma);
    
}