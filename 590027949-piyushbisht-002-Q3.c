#include <stdio.h>

int main()
{
    int a, b,perimeter,prod;

    printf("Enter Length = ");
    scanf("%d", &a);

    printf("Enter Breadth = ");
    scanf("%d", &b);
    

    perimeter=(2*(a+b));
    printf("Perimeter Of Rectangle is = %d\n", perimeter);
    
    
    prod = a * b;

    printf("Area Of Rectangle is = %d\n", prod);
    return 0;
}
