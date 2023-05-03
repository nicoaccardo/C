#include <stdio.h>
#include </home/x__nick15__x/Scrivania/C/Esercitazione_08/02_menuMatrice/functions.h>
#define RIGHE 100
#define COLONNE 100

int main() {

    int a[RIGHE][COLONNE], n, m, scelta, riga, colonna;

    // Leggere il numero di righe e colonne
    printf("Inserisci il numero di righe: ");
    n=dimensioneMatrice();
    printf("Inserisci il numero di colonne: ");
    m=dimensioneMatrice();

    // Inizializzare le celle della matrice
    inizializzazioneMatrice(a, n, m);
    printf("\nMatrice:\n");
    stampaMatrice(a, n, m);

    do
    {
        // Stampa del menu
        stampaMenu();
        printf("\nCosa vuoi fare? ");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            // Stampa una riga
            printf("\nQuale riga vuoi stampare? ");
            scanf("%d", &riga);
            printf("\nRiga %d:\n", riga);
            stampaRiga(a, riga, m, n);
            break;

        case 2:
            // Stampa una colonna
            printf("\nQuale colonna vuoi stampare? ");
            scanf("%d", &colonna);
            printf("\nColonna %d:\n", colonna);
            stampaColonna(a, colonna, n, m);
            break;

        case 3:
            // Stampa la diagonale principale
            if (n!=m)
            {
                printf("\nLa matrice deve essere quadrata\n");
                break;
            }
            printf("\nLa diagonale principale:\n");
            stampaDiagonale(a, n);
            break;

        case 4:
            // Somma gli elementi di una riga
            printf("\nQuale riga vuoi sommare? ");
            scanf("%d", &riga);
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;
        
        default:
            break;
        }

    } while (scelta!=0);
    

    return 0;
}