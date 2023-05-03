// Programma che dice se il carattere è una consonante o una vocale (non case-sensitive)
#include <stdio.h>

int main() {


    char x;
    printf("Inserisci un carattere minuscolo: ");
    scanf("%c", &x);

    // Le vocali minuscole sono: 97, 101, 105, 111, 117 ( la differenza con le maiuscole è di -32)
    if (x!=97 && x!=101 && x!=105 && x!=111 && x!=117 && x!=65 && x!=69 && x!=73 && x!=79 && x!=85)
    {
        printf("Hai inserito una consonante\n");
    } else
    {
        printf("Hai inserito una vocale\n");
    }

    // switch (x)
    // {
    // case 'a':
    //     printf("Hai inserito una vocale\n");
    //     break;
    
    // case 'e':
    //     printf("Hai inserito una vocale\n");
    //     break;
    
    // case 'i':
    //     printf("Hai inserito una vocale\n");
    //     break;

    // case 'o':
    //     printf("Hai inserito una vocale\n");
    //     break;

    // case 'u':
    //     printf("Hai inserito una vocale\n");
    //     break;
    
    // case 'A':
    //     printf("Hai inserito una vocale\n");
    //     break;
    
    // case 'E':
    //     printf("Hai inserito una vocale\n");
    //     break;
    
    // case 'I':
    //     printf("Hai inserito una vocale\n");
    //     break;

    // case 'O':
    //     printf("Hai inserito una vocale\n");
    //     break;

    // case 'U':
    //     printf("Hai inserito una vocale\n");
    //     break;

    // default: printf("Hai inserito una consonante\n");
    //     break;
    // } 
}