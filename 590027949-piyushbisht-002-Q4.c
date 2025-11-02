#include <stdio.h>

int main() {
    float pi, circumference, radius, area;
    pi = 3.14159;

    printf("Enter Radius Of Circle = ");
    scanf("%f", &radius);

    area = pi*radius*radius;        
    circumference = 2*pi*radius;    

    printf("Area Of Circle = %.2f\n", area);
    printf("Circumference Of Circle = %.2f\n", circumference);
    
    return 0;
}
