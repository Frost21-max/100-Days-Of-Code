#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int i = 0;

    // Print first initial
    if (s[0] != ' ' && s[0] != '\n')
        printf("%c.", s[0]);

    int initials = 1;  // we already printed 1st initial

    // Print second initial (after 2nd name)
    for (i = 1; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n') {

            if (initials == 1) {    // second name initial
                printf("%c.", s[i+1]);
                initials++;
            } else {
                // found surname start
                i++; 
                break;
            }
        }
    }

    printf(" "); // space before surname

    // Print surname in full
    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] != ' ')
            printf("%c", s[i]);
        i++;
    }

    printf("\n");
    return 0;
}
