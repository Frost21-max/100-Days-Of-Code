#include <stdio.h>

int main() {
    char s[1000];
    int len = 0;

    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    int i = 0, j = len - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            printf("Not palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome");
    return 0;
}
