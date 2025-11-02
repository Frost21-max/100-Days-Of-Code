#include <stdio.h>

int main() {
    int a , b, c;
    printf("Enter a number: ");
    scanf("%d %d",&a,&b);

    printf("Before Swapping a = %d\nb = %d\n", a, b);

    c = b;
    b = a;
    a = c;

    printf("After Swapping a = %d\nb = %d\n", a, b);

    return 0;
}
