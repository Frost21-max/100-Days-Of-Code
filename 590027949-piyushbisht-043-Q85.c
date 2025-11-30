#include <stdio.h>

int main() {
    char s[1000];
    int len = 0;

    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}
