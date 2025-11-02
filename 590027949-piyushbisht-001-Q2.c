#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, prod;
    float quot;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    if (b != 0)
    {
        quot = (float)a / b;
        printf("Quotient = %.2f\n", quot);
    }
    else
    {
        printf("Division is not possible (Denominator is 0)\n");
    }



    return 0;
}
