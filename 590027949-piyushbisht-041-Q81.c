#include <stdio.h>

int main() {
    char s[1000];
    int count = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[count] != '\0')
        count++;

    printf("Character count = %d\n", count);
    return 0;
}