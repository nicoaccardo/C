#include <stdio.h>
#include <string.h>
#define MAXLINE 100
void copiaStringa(char *stringaPtr1, char *stringaPtr2);
void stringheUguali(char *stringaPtr1, char *stringaPtr2, char *ugualePtr);
void concatenaStringhe(char *stringaPtr1, char *stringaPtr2, char *stringaPtr3);

int main() {

    char uguale=1;
    char stringa1[MAXLINE+1], stringa2[MAXLINE+1], stringaConcatenata[MAXLINE+1];

    puts("Inserisci la prima stringa: ");
    scanf("%[^\n]", stringa1);
    // printf("%s\n", stringa1);


    //** Copiare una stringa in un'altra
    //strcpy(stringa2, stringa1);
    // copiaStringa(stringa1, stringa2);
    puts("Inserisci la seconda stringa: ");
    scanf(" %[^\n]", stringa2);
    // printf("%s\n", stringa2);

    //** Verificare che due stringe sono uguali
    stringheUguali(stringa1, stringa2, &uguale);

    //** Concatenare due stringhe
    if ((strlen(stringa1)+strlen(stringa2))<MAXLINE)
    {
    concatenaStringhe(stringa1, stringa2, stringaConcatenata);
    printf("%s\n", stringaConcatenata);
    } else
    {
        puts("Le due stringhe sono troppo lunghe");
    }
    
    

    //** Trovare la prima occorrenza di un carattere in una stringa

    //** Trovare la prima occorrenza di una stringa in una stringa

    return 0;
}

void copiaStringa(char *stringaPtr1, char *stringaPtr2)
{
    size_t i;
    for (i = 0; *(stringaPtr1+i) != '\0'; i++)
    {
        *(stringaPtr2+i) = *(stringaPtr1+i);
    }
    *(stringaPtr2+i) = '\0';
}

void stringheUguali(char *stringaPtr1, char *stringaPtr2, char *ugualePtr)
{
    for (size_t i = 0; *(stringaPtr1+i) != '\0'; i++)
    {
        if (*(stringaPtr1+i)!=*(stringaPtr2+i))
        {
            ugualePtr=0;
            puts("Non sono uguali");
            return;
        }
    }
    puts("Sono uguali");
}

void concatenaStringhe(char *stringaPtr1, char *stringaPtr2, char *stringaPtr3)
{
    size_t i;
    for (i = 0; *(stringaPtr1+i) != '\0'; i++)
    {
        *(stringaPtr3+i) = *(stringaPtr1+i);
    }

    for (size_t j=0; *(stringaPtr2+j) != '\0'; j++)
    {
        *(stringaPtr3+i) = *(stringaPtr2+j);
        i++;
    }
    
    *(stringaPtr3+i) = '\0';
}
