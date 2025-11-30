#include <stdio.h>

int main() {
    char s[1000], ch;
    int freq = 0;

    fgets(s, sizeof(s), stdin);

    scanf("%c", &ch);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ch)
            freq++;
    }

    printf("%d\n", freq);

    return 0;
}
