//* Programma per la lettura da file dei campi di una struttura
#include <stdio.h>

struct alunno
{
    char nome[15];
    char cognome[20];
    int voto;
};

typedef struct alunno Alunno;

int main(int argc, char *argv[]){

    Alunno *ptr;

    FILE *fp;

    // if (argc != 2)
    // {
    //     puts("Devi inserire solo il nome del file da leggere");
    //     return -1;
    // }

    //Aprire in sola lettura un file passato da riga di comando
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        puts("Errore nell'apertura del file");
        return -1;
    }

    //Leggere i dati dal file e visualizzarli sullo standard output
    fscanf(fp, "%s", ptr->nome);
    fscanf(fp, "%s", ptr->cognome);
    fscanf(fp, "%d", &ptr->voto);

    fclose(fp);

    printf("Alunno: \nNome: %s \nCognome: %s \nVoto: %d \n", ptr->nome, ptr->cognome, ptr->voto);     

    return 0;
}