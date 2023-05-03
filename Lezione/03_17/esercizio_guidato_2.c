#include <stdio.h>

int main() {

    int grade, counter, studenti;
    float  average, total;

    studenti = 0;
    total = 0;
    counter = 0;

    printf("%s", "Inserisci il numero di studenti: ");
    scanf("%d", &studenti);

if(studenti>0) {

    while (counter < studenti)
    {
        printf("%s", "Inserisci il voto: "); //%s viene utilizzato per evitare che la printf sia vulnerabile da possibili attacchi//
        scanf("%d", &grade);
        total += grade;
        counter += 1;
    }

    average = total / studenti;
    printf("%s %.1f\n", "La media è:", average);

} else {
    printf("%s\n", "Fine del programma");
}
    return 0;
}