//**Si definisca una struttura impiegato che contenga una struttura persona che, a sua volta, contenga una struttura dataDiNascita.
//**Nel main si dichiari una variabile impiegato da inizializzare con valori chiesti dall'utente e alla fine se ne stampi il contenuto.

#include <stdio.h>

struct dataDiNascita
{
    int anno, mese, giorno;
};

struct persona
{
    char nome[20], cognome [20], sesso;
    struct dataDiNascita data;
};

struct impiegato
{
    int oreSettimanali;
    float salario;
    struct persona prs;
};

int main(){

    struct impiegato impiegato;

    printf("Introdurre nome:\n");
    scanf("%s", impiegato.prs.nome);

    printf("Inserisci cognome:\n");
    scanf("%s", impiegato.prs.cognome);

    printf("Nome: %s\n", impiegato.prs.nome);
    printf("Cognome: %s\n", impiegato.prs.cognome);

    return 0;
}