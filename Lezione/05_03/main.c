#include <stdio.h>

int main() {

    int x = 3;
    int y = 10;
    int* p = &x;

    ++ *p;
    printf("Valore puntato da p: %d\n", *p);

    p=&y;
    printf("Valore puntato da p: %d\n", *p);

    return 0;
}