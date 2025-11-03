#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        // print leading spaces
        for(j = 5; j > i; j--) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
