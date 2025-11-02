#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter Temperature In Celsius = ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Temperature In Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}