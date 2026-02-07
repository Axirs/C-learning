#include <stdio.h>

int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, last, sum1, sum2, total, check_d;

int main(void)
{
    printf("ENTER THE FIRST (SINGLE) DIGIT: ");
    scanf(" %d", &first);

    printf("ENTER FIRST GROUP OF FIVE DIGITS: ");
    scanf(" %1d%1d%1d%1d%1d", &second, &third, &fourth, &fifth, &sixth);

    printf("ENTER SECOND GROUP OF FIVE DIGITS: ");
    scanf(" %1d%1d%1d%1d%1d", &seventh, &eighth, &ninth, &tenth, &eleventh);
    
    printf("ENTER LAST DIGIT: ");
    scanf(" %d", &last);
    
    sum1 = first + third + fifth + seventh + ninth + eleventh;
    sum2 = second + fourth + sixth + eighth + tenth;
    total = (3 * sum1) + sum2;
    check_d = 9 - ((total - 1) % 10);

    if (check_d != last)
        printf("invalid\n");
    else
    printf("Success Scan\n");

    printf("code is %d", check_d);

    return 0;

}


