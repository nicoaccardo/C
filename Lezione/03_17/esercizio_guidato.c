// Programma che calcola la media voti di una classe di 10 alunni
#include <stdio.h>

int main() {

    int grade, counter;
    float  average, total;
    total = 0;
    counter = 0;

    while (counter < 10)
    {
        printf("%s", "Enter grade: "); //%s viene utilizzato per evitare che la printf sia vulnerabile da possibili attacchi//
        scanf("%d", &grade);
        total += grade;
        counter += 1;
    }

    average = total / 10;
    printf("La media è: %.1f\n", average);

    return 0;
}