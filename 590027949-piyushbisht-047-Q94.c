#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    for (int i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\0') {
            if (currLen == 0) currStart = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }

        if (s[i] == '\n' || s[i] == '\0') break;
    }

    for (int i = 0; i < maxLen; i++)
        printf("%c", s[maxStart + i]);

    printf("\n");
    return 0;
}
