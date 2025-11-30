#include <stdio.h>

int main() {
    char s[1000];
    int len = 0;
    int first = 1; // to avoid extra comma

    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {

            if (!first)
                printf(",");
            first = 0;

            for (int k = i; k <= j; k++)
                printf("%c", s[k]);
        }
    }

    printf("\n");
    return 0;
}
