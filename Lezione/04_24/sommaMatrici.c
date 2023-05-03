#include <stdio.h>
#define RIGHE 3
#define COLONNE 3

void leggiMatrice(int a[][COLONNE], size_t righe, size_t colonne);
void stampaMatrice(int const a[][COLONNE], size_t righe, size_t colonne);
void sommaMatrici(int const a[][COLONNE], int const b[][COLONNE], int c[][COLONNE], size_t righe, size_t colonne);

int main() {

    int a[RIGHE][COLONNE], b[RIGHE][COLONNE], somma[RIGHE][COLONNE];

    // Leggi matrici a e b
    printf("\nInserisci valori della matrice a:\n");
    leggiMatrice(a, RIGHE, COLONNE);
    printf("\nInserisci valori della matrice b:\n");
    leggiMatrice(b, RIGHE, COLONNE);
    

    // Visualizza a e b
    printf("\nMatrice a:\n");
    stampaMatrice(a, RIGHE, COLONNE);
    printf("\nMatrice b:\n");
    stampaMatrice(b, RIGHE, COLONNE);


    // Somma a e b
    sommaMatrici(a, b, somma, RIGHE, COLONNE);
    // Visualizza somma
    printf("\nMatrice somma:\n");
    stampaMatrice(somma, RIGHE, COLONNE);

    // prodottoVettore();

    // prodottoMatrici();

    return 0;
}

// Funzione che legge le matrici
void leggiMatrice(int a[][COLONNE], size_t righe, size_t colonne)
{
    for (size_t i = 0; i < righe; i++)
    {
        for (size_t j = 0; j < colonne; j++)
        {
            printf("Inserisci elemento[%ld][%ld]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Funzione che stampa le matrici
void stampaMatrice(int const a[][COLONNE], size_t righe, size_t colonne)
{
    for (size_t i = 0; i < righe; i++)
    {
        for (size_t j = 0; j < colonne; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
}

// Funzione che somma le matrici
void sommaMatrici(int const a[][COLONNE], int const b[][COLONNE], int c[][COLONNE], size_t righe, size_t colonne)
{
    for (size_t i = 0; i < righe; i++)
    {
        for (size_t j = 0; j < colonne; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    
}

