#include <stdio.h>
#define L 100

// Funzione che copia una stringa in un altra
void copiaStringa(const char x[], char y[]);

int main() {

    char s1[L], s2[L];

    puts("Inserisci la prima stringa:");
    scanf(" %99[^\n]", s1);

    // Copia s1 in s2
    copiaStringa(s1, s2);

    printf("Stringa s2: %s", s2);

    return 0;
}

void copiaStringa(const char x[], char y[])
{
    size_t i;
    for (i = 0; x[i]  != '\0'; i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
}
