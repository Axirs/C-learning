#include <stdio.h>

void bigsmall(int a[], int n, int *low, int *high);

int main(void)
{   
    int N, i, big, small;

    printf("How many numbers? ");
    scanf("%i", &N);

    int b[N];
    printf("Enter %i numbers: ", N);

    for (i = 0; i < N; i++)
        scanf("%i", &b[i]);

    bigsmall(b, N, &small, &big);

    printf("Biggest number: %d\n", big);
    printf("Smallest number: %d\n", small);

    return 0;
}

void bigsmall(int a[], int n, int *low, int *high)
{
    *low = *high = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > *high)
            *high = a[i];
        else if (a[i] < *low)
            *low = a[i];

    
}