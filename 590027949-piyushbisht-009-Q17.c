#include <stdio.h>

float squareRoot(float n) {
    float x = n;
    float y = 1;
    float e = 0.000001; 

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    float a, b, c, d, r1, r2, real, imaginary;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c; 

    if (d > 0) {
        float sq = squareRoot(d);
        r1 = (-b + sq) / (2 * a);
        r2 = (-b - sq) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r2);
    }
    else {
        float sq = squareRoot(-d);
        real = -b / (2 * a);
        imaginary = sq / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n",
               real, imaginary, real, imaginary);
    }

    return 0;
}
