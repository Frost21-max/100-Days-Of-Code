#include <stdio.h>

int main() {
    char s[1000];
    int spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];

        if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            ; // do nothing for letters
        else
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}

