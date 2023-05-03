#include <stdio.h>

int main() {

    float p, h;
    
    printf("\nInserisci il tuo peso e la tua altezza: ");
    scanf("%f %f", &p, &h);

    float altezza = h * h;
    float BMI = p / altezza;

    printf("\nIl tuo BMI è: %f\n\n", BMI);
    return 0;

}


