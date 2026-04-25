#include <stdio.h>

void decompose(double i, long *int_part, double *frac_part);

int main(void)
{   
    long p; double num, q;
    printf("Enter Num with decimals: ");
    scanf("%lf", &num);

    decompose(num, &p, &q);

    printf("integer: %li\n", p);
    printf("decimal part: %lf\n", q);


    return 0;
}

void decompose(double i, long *int_part, double *frac_part)
{
    *int_part = (long) i;
    *frac_part = i - *int_part; 
}