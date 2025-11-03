#include <stdio.h>

int main()
{
    int n, first, last, temp, power = 1, original;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;
    last = n % 10;
    while (n >= 10)
    {
        n /= 10;
        power *= 10;
    }

    first = n;
    if (power == 1)
    {
        printf("%d\n", original);
        return 0;
    }

    temp = original % power;
    temp = temp / 10;
    int result = last * power + temp * 10 + first;

    printf("After swapping = %d\n", result);

    return 0;
}
