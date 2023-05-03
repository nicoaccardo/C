#include <stdio.h>
#define RIGHE 100
#define COLONNE 100

int dimensioneMatrice();
void inizializzazioneMatrice(int a[][COLONNE], int n, int m);
void stampaMatrice(const int a[][COLONNE], int n, int m);
int massimoMatrice(const int a[][COLONNE], int n, int m);
int minimoMatrice(const int a[][COLONNE], int n, int m);
int sommaMatrice(const int a[][COLONNE], int n, int m);
double mediaMatrice(const int a[][COLONNE], int n, int m, int somma);

int main() {

    int a[RIGHE][COLONNE], n, m, max, min, somma;
    double media;

    // Leggere il numero di righe e colonne
    printf("Inserisci il numero di righe: ");
    n=dimensioneMatrice();
    printf("Inserisci il numero di colonne: ");
    m=dimensioneMatrice();

    // Inizializzare le celle della matrice
    inizializzazioneMatrice(a, n, m);

    // stampare la matrice
    printf("\nIl valore della matrice è:\n");
    stampaMatrice(a, n, m);

    // stampare il massimo
    max=massimoMatrice(a, n, m);
    printf("\nIl massimo è: %d\n", max);

    // stampare il minimo
    min=minimoMatrice(a, n, m);
    printf("\nIl minimo è: %d\n", min);

    // stampare la somma
    somma=sommaMatrice(a, n, m);
    printf("\nLa somma è: %d\n", somma);

    // stampare la media
    media=mediaMatrice(a, n, m, somma);
    printf("\nLa media è: %.2f\n", media);

    return 0;
}

int dimensioneMatrice(){
    int dim;
    do
    {
        scanf("%d", &dim);
        if (dim<1 || dim>100)
        {
            printf("Inserisci un valore compreso tra 1 e 100!\n");
        }

    } while (dim<1 || dim>100);
    
    return dim;
}

void inizializzazioneMatrice(int a[][COLONNE], int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("elemento[%ld][%ld]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void stampaMatrice(const int a[][COLONNE], int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int massimoMatrice(const int a[][COLONNE], int n, int m)
{
    int max=a[0][0];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (a[i][j]>=max)
            {
                max=a[i][j];
            }
        }
    }
    return max;
}

int minimoMatrice(const int a[][COLONNE], int n, int m)
{
    int min=a[0][0];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (a[i][j]<=min)
            {
                min=a[i][j];
            }
        }
    }
    return min;
}

int sommaMatrice(const int a[][COLONNE], int n, int m)
{
    int somma=0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            somma+=a[i][j];
        }
    }
    return somma;
}

double mediaMatrice(const int a[][COLONNE], int n, int m, int somma)
{
    double media;
    media = somma/(n+m);
    return media;
}
