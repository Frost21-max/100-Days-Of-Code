#include <stdio.h>

int main() {
    long long n;
    printf("Enter number: ");
    scanf("%lld", &n);

    if (n == 0) { printf("All integers are factors of 0\n"); return 0; }

    long long absn = n < 0 ? -n : n;
    for (long long i = 1; i <= absn; i++) {
        if (absn % i == 0) printf("%lld ", i);
    }
    printf("\n");
    return 0;
}
