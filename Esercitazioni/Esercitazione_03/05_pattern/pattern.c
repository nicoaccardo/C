// Programma che stampa un pattern

#include <stdio.h>

int main() {

    for(int i = 0; i<10; ++i) {

        if((i%2)==0) {
            printf("* * * * * * * * \n");
        } 
        
        else {
            printf(" * * * * * * * *\n");
        }
    }
    return 0;
}