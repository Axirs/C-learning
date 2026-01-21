#include <stdio.h>

int main(void)
{
    int n;
    printf("Pyramid rows:");
    scanf("%i", &n);

    int s = 1;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (k < n)
        {
            for (int m = n; m > k; m--)
            {
            printf(" ");
            }
            k++;
        }
        for (int j = 0; j < i+s; j++)
        {
            printf("#");

        }
        printf("\n");
        s = s+1;
    }

    
}