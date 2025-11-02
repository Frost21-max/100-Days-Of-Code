#include <stdio.h>

int main() {
    int n;
    float a;
    
    printf("Value Of n = ");
    scanf("%d", &n);

    a = (float)n * (n + 1) / 2;

    printf("Sum Of First %d Numbers = %.2f\n", n, a);

    return 0;
}
