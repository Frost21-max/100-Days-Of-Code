#include <stdio.h>

int main() {
    char s[1000];
    int freq[256] = {0};
    int left = 0, maxLen = 0;

    fgets(s, sizeof(s), stdin);

    for (int right = 0; s[right] != '\0' && s[right] != '\n'; right++) {
        unsigned char c = s[right];
        freq[c]++;

        while (freq[c] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        int len = right - left + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("%d\n", maxLen);
    return 0;
}
