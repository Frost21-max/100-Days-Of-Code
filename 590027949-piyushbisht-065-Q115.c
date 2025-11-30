#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq[26] = {0};

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    for (int i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
        freq[s1[i] - 'a']++;

    for (int i = 0; s2[i] != '\0' && s2[i] != '\n'; i++)
        freq[s2[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
