#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int printed = 0;

    // Print first initial if not space/newline
    if (s[0] != ' ' && s[0] != '\n') {
        printf("%c.", s[0]);
        printed = 1;
    }

    // Print subsequent initials
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n') {
            printf("%c.", s[i+1]);
            printed = 1;
        }
    }

    if (printed)
        printf("\n");

    return 0;
}
