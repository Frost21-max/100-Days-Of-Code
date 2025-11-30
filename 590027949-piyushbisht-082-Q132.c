#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal;
    scanf("%d", &signal);

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");

    return 0;
}
