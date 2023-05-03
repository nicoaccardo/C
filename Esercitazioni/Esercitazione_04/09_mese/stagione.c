// Programma che ti dice la stagione avendo il mese
#include <stdio.h>

int main() {

    int mese, giorno;
    printf("\nInserisci il numero del mese: ");
    scanf("%d", &mese);

    switch (mese) {
    case 1:
        printf("La stagione corrispondente è: Inverno\n\n");
        break;
    
    case 2:
        printf("La stagione corrispondente è: Inverno\n\n");
        break;

    case 3:
        printf("Inserisci il giorno: ");
        scanf("%d", &giorno);
        
        if (giorno<=20 && giorno>=1)
        {
            printf("La stagione corrispondente è: Inverno\n\n");
        } else if (giorno<=31)
        {
            printf("La stagione corrispondente è: Primavera\n\n");
        } else
        {
            printf("Il giorno inserito non è valido\n\n");
        }
        
        
        break;

    case 4:
        printf("La stagione corrispondente è: Primavera\n\n");
        break;
    
    case 5:
        printf("La stagione corrispondente è: Primavera\n\n");
        break;

    case 6:
        printf("Inserisci il giorno: ");
        scanf("%d", &giorno);
        
        if (giorno<=20 && giorno>=1)
        {
            printf("La stagione corrispondente è: Primavera\n\n");
        } else if (giorno<=30)
        {
            printf("La stagione corrispondente è: Estate\n\n");
        } else
        {
            printf("Il giorno inserito non è valido\n\n");
        }
        
        break;

    case 7:
        printf("La stagione corrispondente è: Estate\n\n");
        break;
    
    case 8:
        printf("La stagione corrispondente è: Estate\n\n");
        break;

    case 9:
        printf("Inserisci il giorno: ");
        scanf("%d", &giorno);
        
        if (giorno<=20 && giorno>=1)
        {
            printf("La stagione corrispondente è: Estate\n\n");
        } else if (giorno<=30)
        {
            printf("La stagione corrispondente è: Autunno\n\n");
        } else
        {
            printf("Il giorno inserito non è valido\n\n");
        }
        
        break;

    case 10:
        printf("La stagione corrispondente è: Autunno\n\n");
        break;
    
    case 11:
        printf("La stagione corrispondente è: Autunno\n\n");
        break;

    case 12:
        printf("Inserisci il giorno: ");
        scanf("%d", &giorno);
        
        if (giorno<=20 && giorno>=1)
        {
            printf("La stagione corrispondente è: Autunno\n\n");
        } else if (giorno<=31)
        {
            printf("La stagione corrispondente è: Inverno\n\n");
        } else
        {
            printf("Il giorno inserito non è valido\n\n");
        }
        
        break;

    default: printf("Il mese inserito non è valido!\n\n");
        break;
    }

    return 0;

}