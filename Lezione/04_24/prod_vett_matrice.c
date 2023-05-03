#include <stdio.h>
#define M 3
#define N 2

void leggiMatrice(const int a[][N], size_t righe, size_t colonne);
void stampaMatrice(int const a[][N], size_t righe, size_t colonne);
void inputArray(int a[], size_t dim);
void stampaArray(const int a[], size_t dim);

void prodottoArrayMatrice(const int a[], const int b[][N], int c[], size_t righe, size_t colonne);

int main() {

    int a[M], b[M][N], c[N];

    // Inizializza a e b
    printf("Inserisci gli elementi dell'array\n");
    inputArray(a,M);
    printf("Inserisci gli elementi della matrice\n");
    leggiMatrice(b, M, N);

    // Visualizza a e b
    printf("Vettore a: \n");
    stampaArray(a, M);
    printf("Matrice b: \n");
    stampaMatrice(b, M, N);

    // Moltiplica vettore e matrice

    // Visualizza c

    return 0;
}

// Funzione che legge le matrici
void leggiMatrice(const int a[][N], size_t righe, size_t colonne)
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
void stampaMatrice(int const a[][N], size_t righe, size_t colonne)
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

void inputArray(int a[], size_t dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        printf("elemento[%ld]: ", i);
        scanf("%d", &a[i]);
    }
    
}

// Funzione che stampa l'array
void stampaArray(const int a[], size_t dim){

    printf("");
    for (size_t i = 0; i < dim; i++)
    {
        printf("%d\t", a[i]);
    }
    

}

void prodottoArrayMatrice(const int a[], const int b[][N], int c[], size_t righe, size_t colonne)
{
    for (size_t j = 0; j < colonne; j++)
    {
        /* code */
    }
    
}
