#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], combo[2000];
    int len1 = 0, len2 = 0;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // remove newline
    while (s1[len1] != '\0' && s1[len1] != '\n') len1++;
    while (s2[len2] != '\0' && s2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not Rotation\n");
        return 0;
    }

    // create s1 + s1
    for (int i = 0; i < len1; i++) combo[i] = s1[i];
    for (int i = 0; i < len1; i++) combo[len1 + i] = s1[i];
    combo[2 * len1] = '\0';

    // check if s2 is inside combo
    int found = 0;
    for (int i = 0; i <= 2 * len1 - len2; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (combo[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}
