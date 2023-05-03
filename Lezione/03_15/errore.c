#include <stdio.h>

int main() {
    char x;
    printf("Inserisci un carattere:");
    // La scanf in questo caso prende il carattere inserito che viene tolto dallo stdin 
    // Rimane nello stdin il carattere di ritorno a capo che verrà presa dalla prossima scanf
    // che usa %c. Per evitare il problema si può usare una scanf vuota oppure %s 
    scanf("%c", &x);
    printf("%c\n", x);
    scanf("%s", &x);
}