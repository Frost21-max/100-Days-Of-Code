#include <stdio.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    // Convert first character to uppercase
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    // Convert rest to lowercase
    for (int i = 1; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("%s\n", s);
    return 0;
}
