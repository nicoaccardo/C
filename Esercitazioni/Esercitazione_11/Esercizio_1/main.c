#include <stdio.h>
#define SIZE 100

void assegna(double* aPtr, const int dim);
void stampaArray(const double* aPtr, const int dim);
void minimo(const double* aPtr, double* const min, const int dim);
void massimo(const double* aPtr, double* const max, const int dim);

int main()
{
    int x, y;
    double a[SIZE], b[SIZE];
    double min, max;

    // Inserire i due insiemi di numeri
    puts("Quanti numeri inserirai nel primo array? ");
    scanf("%d", &x);
    assegna(a, x);

    puts("Quanti numeri inserirai nel secondo array? ");
    scanf("%d", &y);
    assegna(b, y);

    puts("\nArray A:");
    stampaArray(a, x);
    puts("\nArray B:");
    stampaArray(b, y);

    // Calcolare il minimo
    minimo(a, &min, x);
    minimo(b, &min, y); 
    printf("\nIl minimo è: %.2f\n ", min);

    // Calcolare il massimo
    massimo(a, &max, x);
    massimo(b, &max, y); 
    printf("\nIl massimo è: %.2f\n ", max);

    return 0;
}

void assegna(double* aPtr, const int dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        printf("Elemento[%ld]: ", i);
        scanf("%lf", &(*(aPtr+i)));
    }
}

void stampaArray(const double* aPtr, const int dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        printf("Elemento[%ld]: %.2f\n", i, *(aPtr+i));
    }
    
}

void minimo(const double* aPtr, double* const min, const int dim)
{
    *min = *aPtr;
    for (size_t i = 0; i < dim; i++)
    {
        if (*(aPtr+i)<=*min)
        {
            *min=*(aPtr+i);
        }  
    }
}

void massimo(const double* aPtr, double* const max, const int dim)
{
    *max = *aPtr;
    for (size_t i = 0; i < dim; i++)
    {
        if (*(aPtr+i)>=*max)
        {
            *max=*(aPtr+i);
        }  
    }
}
