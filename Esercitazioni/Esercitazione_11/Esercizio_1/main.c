#include <stdio.h>
#define SIZE 100

void assegna(double* ptr_a, int dim);
void stampaArray(double* ptr_a, int dim);
void minimo(double* ptr_a, double* min, int dim);
void massimo(double* ptr_a, double* max, int dim);

int main()
{
    int x, y;
    double a[SIZE], b[SIZE];
    double *min = a, *max = a;

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
    minimo(a, min, x);
    minimo(b, min, y); 
    printf("\nIl minimo è: %2.f\n ", *min);

    // Calcolare il massimo
    massimo(a, max, x);
    massimo(b, max, y); 
    printf("\nIl massimo è: %2.f\n ", *max);

    return 0;
}

void assegna(double* ptr_a, int dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        printf("Elemento[%ld]: ", i);
        scanf("%lf", &(*(ptr_a+i)));
    }
}

void stampaArray(double* ptr_a, int dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        printf("Elemento[%ld]: %2.f\n", i, *(ptr_a+i));
    }
    
}

void minimo(double *ptr_a, double *min, int dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        if (*(ptr_a+i)<=*min)
        {
            *min=*(ptr_a+i);
        }  
    }
}

void massimo(double *ptr_a, double *max, int dim)
{
    for (size_t i = 0; i < dim; i++)
    {
        if (*(ptr_a+i)>=*max)
        {
            *max=*(ptr_a+i);
        }  
    }
}
