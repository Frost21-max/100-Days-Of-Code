#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("The number is Positive\n");
    } else if (a < 0) {
        printf("The number is Negative\n");
    } else {
        printf("The number is Zero\n");
    }

    return 0;
}
