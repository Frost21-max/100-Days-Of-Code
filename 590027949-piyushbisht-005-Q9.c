#include<stdio.h>

int main() {
    float p, t, r, a, SI, CI;
    int i;

    printf("Enter Principal Amount = ");
    scanf("%f", &p);
    printf("Enter Rate Of Interest = ");
    scanf("%f", &r);
    printf("Enter Time (in years) = ");
    scanf("%f", &t);

    SI = (p * r * t) / 100;

    a = p; 
    for(i = 1; i <= t; i++) {
        a = a * (1 + r / 100);
    }

    CI = a - p;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}

