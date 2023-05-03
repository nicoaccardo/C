#include <stdio.h>

int main() {

    char voto;
    printf("\nQuanto hai preso di analisi? ");
    scanf("%c", &voto);

    switch (voto)
    {
    case 'A': case 'a': printf("\nAntonino gay\n\n"); break;
    
    case 'B': case 'b': printf("\nSei una persona intelligente\n\n"); break;

    case 'C': case 'c': printf("\nSei una persona normale\n\n"); break;

    case 'D': case 'd':printf("\nTrenta 18 fanno una laurea\n\n");break;

    default:
        printf("\nLa darai al prossimo appello\n\n");
        break;
    }

}