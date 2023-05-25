/*Programma che apre un file di testo in modalità append, visualizza sullo standard output il messaggio "Aperto correttamente" e chiude il file.
Nel caso di errore visualizza "Errore"*/
#include <stdio.h>

int main(){

    FILE *fp;

    if ((fp = fopen("fileDiTesto.txt", "a+"))==NULL)
    {
        printf("Errore\n");
        return -1;
    }

    printf("Aperto correttamente\n");
    fclose(fp);
    return 0;
}