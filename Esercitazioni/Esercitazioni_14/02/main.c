//* Programma che legge due interi da un file di testo e li visualizza sullo standard output
#include <stdio.h>

int main(void){

    FILE *fp;
    int x, y;

    // Controllo se il file viene aperto correttamente
    if ((fp = fopen("interi.txt", "r"))==NULL)
    {
        puts("Errore nell'apertura del file\n");
        return -1;
    }

    // Memorizzo i due interi
    fscanf(fp, "%d %d", &x, &y);

    // Chiudo il file
    fclose(fp);

    // Stampo gli interi
    printf("Ho letto: %d e %d\n", x, y);

    return 0;
}