#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");
    printf("\n");

    return 0;
}
