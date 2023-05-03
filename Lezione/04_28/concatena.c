// Programma che concatena due stringhe
#include <stdio.h>
#include <string.h>
#define MAXLINE 100

// s1 viene modificata concatenando ad essa s2
void concatena(char s1[], const char s2[]);

int main(){

    char a[MAXLINE+1], b[MAXLINE+1];

    printf("Inserisci due stringhe:\n");
    scanf(" %100[^\n]", a);
    scanf(" %100[^\n]", b);

    concatena(a, b);

    printf("Stringa concatenata: %s\n", a);

    return 0;
}

void concatena(char s1[], const char s2[])
{
    // strcat(s1, " ");
    // strcat(s1, s2);

    // int l_s1 = strlen(s1), l_s2 = strlen(s2);
    // if (l_s1+l_s2 >= MAXLINE)
    // {
    //     puts("Concatenazione impossibile\n");
    //     return;
    // }

    size_t i, j;
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++)
    {
        s1[i+j]=s2[j];
    }
    s1[i+j]='\0';
    
}
