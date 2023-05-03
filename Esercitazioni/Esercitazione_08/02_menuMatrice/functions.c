#define COLONNE 100
#include <stdio.h>

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

void stampaMenu()
{   
    printf("\nMenù:\n");
    printf("\t1: Stampa una riga\n");
    printf("\t2: Stampa una colonna\n");
    printf("\t3: Stampa la diagonale principale\n");
    printf("\t4: Somma gli elementi di una riga\n");
    printf("\t5: Somma gli elementi di una colonna\n");
    printf("\t6: Somma gli elementi della diagonale principale\n");
    printf("\t7: Modifica il valore di una specifica cella\n");
    printf("\t0: Termina il programma\n");
}

void stampaRiga(const int a[][COLONNE], int riga, int m, int n)
{
    if (riga>n)
    {
        printf("Errore");
        return;
    }
    
    printf("\nRiga %d:\n", riga);

    for (size_t i = 0; i < m; i++)
    {
        printf("%d\t", a[riga-1][i]);
    }
    printf("\n");
}

void stampaColonna(const int a[][COLONNE], int colonna, int n, int m)
{
    if (colonna>m)
    {
        printf("Errore");
        return;
    }

    printf("\nColonna %d:\n", colonna);

    for (size_t i = 0; i < n; i++)
    {
        printf("%d\t", a[i][colonna-1]);
    }
    printf("\n");
}

void stampaDiagonale(const int a[][COLONNE], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\t", a[i][i]);
    }
    printf("\n");
}
