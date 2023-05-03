#include <stdio.h>

int main() {

    int anno, luna=1969;


    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d", &anno);

    if (anno == luna)
    {
        printf("Nello stesso anno l'uomo è andato sulla Luna\n");

    } else if (anno > luna) {
            int dopo = anno - luna;
            printf("Sei nato/a %d anni dopo lo sbarco sulla Luna\n", dopo);

    } else {
            int prima = luna - anno;
            printf("Sei nato/a %d anni prima dello sbarco sulla Luna\n", prima);
    }   
}