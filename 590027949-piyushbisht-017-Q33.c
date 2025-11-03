#include <stdio.h>

long long int_pow(int base, int exp) {
    long long res = 1;
    while (exp--) res *= base;
    return res;
}

int main() {
    long long n, temp;
    int digits = 0;
    printf("Enter number: ");
    scanf("%lld", &n);

    temp = llabs(n);
    if (temp == 0) digits = 1;
    while (temp > 0) { digits++; temp /= 10; }

    temp = llabs(n);
    long long sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        sum += int_pow(d, digits);
        temp /= 10;
    }

    if (sum == llabs(n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
