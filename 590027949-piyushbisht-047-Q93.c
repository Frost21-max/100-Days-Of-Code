#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq[256] = {0};

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int i = 0;
    while (s1[i] != '\0' && s1[i] != '\n') {
        freq[(unsigned char)s1[i]]++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        freq[(unsigned char)s2[i]]--;
        i++;
    }

    for (int j = 0; j < 256; j++) {
        if (freq[j] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
