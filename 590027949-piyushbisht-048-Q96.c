#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int start = 0;

    for (int i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            for (int j = i - 1; j >= start; j--)
                printf("%c", j >= start ? s[j] : '\0');

            if (s[i] == ' ')
                printf(" ");
            else
                break;

            start = i + 1;
        }
    }

    printf("\n");
    return 0;
}
