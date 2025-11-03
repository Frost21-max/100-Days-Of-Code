#include <stdio.h>

int main() {
    long long n;
    printf("Enter number: ");
    scanf("%lld", &n);

    if (n <= 1) { printf("Not Prime\n"); return 0; }
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) { printf("Not Prime\n"); return 0; }
    printf("Prime\n");
    return 0;
}
