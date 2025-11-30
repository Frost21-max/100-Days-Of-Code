#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    if (s[0] != ' ' && s[0] != '\n')
        printf("%c", s[0]);

    for (int i = 1; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n')
            printf("%c", s[i+1]);
    }

    printf("\n");
    return 0;
}
