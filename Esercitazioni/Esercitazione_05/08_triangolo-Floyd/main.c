#include <stdio.h>

int main() {

    int N, n=2, j=1;
    printf("Inserisci un numero: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        printf("%d ", i);

        if (j==i)
        {
            printf("\n");
            j+=n;
            n++;
        }
        
    }
    
    printf("\n");
    return 0;
}