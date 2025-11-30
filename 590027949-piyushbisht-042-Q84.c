#include <stdio.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;  // convert to uppercase
        }
    }

    printf("%s", s);

    return 0;
}
