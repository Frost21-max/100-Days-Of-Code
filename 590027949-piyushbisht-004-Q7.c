#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("Before Swapping a = %d\nb = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping a = %d\nb = %d\n", a, b);

    return 0;
}
