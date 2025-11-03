#include <stdio.h>
int main()
{
    int n, bin[32], i = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary = ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);
    printf("\n");

    return 0;
}
