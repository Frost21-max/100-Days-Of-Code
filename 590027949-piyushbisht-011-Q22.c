#include <stdio.h>
int main() {
    float cp, sp, diff, per;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    diff = sp - cp;
    if (diff > 0) {
        per = (diff / cp) * 100;
        printf("Profit = %.2f%%\n", per);
    } else if (diff < 0) {
        per = (-diff / cp) * 100;
        printf("Loss = %.2f%%\n", per);
    } else
        printf("No Profit, No Loss\n");
    return 0;
}
