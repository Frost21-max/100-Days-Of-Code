#include <stdio.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ')
            s[i] = '-';
    }

    printf("%s\n", s);

    return 0;
}
