#include <stdio.h>
int main()
{
    int n, prod = 1, digit, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 == 1)
        {
            prod *= digit;
            flag = 1;
        }
        n /= 10;
    }

    if (flag)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits\n");

    return 0;
}
