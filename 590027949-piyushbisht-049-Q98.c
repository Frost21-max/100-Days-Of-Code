#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int i = 0;

    // Print first initial
    if (s[0] != ' ' && s[0] != '\n')
        printf("%c ", s[0]);

    // Print second initial
    for (i = 1; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n') {
            printf("%c ", s[i+1]);
            i++;
            break;
        }
    }

    // Print surname in full
    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] != ' ')
            printf("%c", s[i]);
        i++;
    }

    printf("\n");
    return 0;
}
