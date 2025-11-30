#include <stdio.h>

int main() {
    char s[1000];
    int freq[26] = {0};

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];

        if (c >= 'a' && c <= 'z') {
            if (freq[c - 'a'] == 1) {
                printf("%c\n", c);
                return 0;
            }
            freq[c - 'a']++;
        }
    }

    printf("-1\n");
    return 0;
}
