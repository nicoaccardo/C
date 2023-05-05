#include <stdio.h>

int main(int argc, char* argv[]){

    if (argc<2)
    {
        puts("Errore: numero di parametri insufficiente");
        return 1;
    }
    
    printf("Hai inserito %d argomenti. Eccoli:\n", argc);

    for (size_t i = 1; i < argc; i++)
    {
        printf("Elemento %ld: %s\n", i, argv[i]);
    }
    
    return 0;
}