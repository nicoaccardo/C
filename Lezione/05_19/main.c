#include <stdio.h>
#define SIZE 100

    void stampaListaDaFile(FILE *fp);

int main(int argc, char *argv[]){

    FILE *fp;
    int continua = 1;
    char s[SIZE];

    // Controlliamo che sia stato passato il nome del file da usare
    if (argc<2)
    {
        printf("Devi passare il nome del file come parametro\n");
        return -1;
    }

    // Apertura del file
    if ((fp=fopen(argv[1], "w+"))==NULL){

        printf("Errore nell'apertura del file\n");
        return -1;
    }
    
    // Ciclo di iterazione con l'utente per la scrittura della lista
    while (continua)
    {
        printf("Inserisci un elemento della lista della spesa: ");
        scanf(" %[^\n]", s);
        fprintf(fp, "%s\n", s);

        printf("Se hai concluso la lista inserisci 0, altrimenti 1: ");
        scanf("%d", &continua);
    }

    // Stampa il contenuto di un FILE
    stampaListaDaFile(fp);
    
    fclose(fp);
    return 0;
}

// Funzione che stampa la lista della spesa da FILE
void stampaListaDaFile(FILE *fp)
{
    char s[100];

    if (fp==NULL){
        printf("Tentativo di usare la funzione stampaListaDaFile su NULL\n");
        return;
    }

    //Riportiamo il puntatore alla fine del file
    rewind(fp);

    printf("Contenuto della lista:\n");
    while (fscanf(fp," %99[^,;\n]",s)!=EOF)
    {
        printf("%s\n",s);
    }
    // printf("\n");
}
