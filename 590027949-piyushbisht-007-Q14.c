#include <stdio.h>

int main() {
    char x;

    printf("Enter a character: ");
    scanf("%c", &x);

    // Check if alphabet
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {

        // Check vowels
        if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u' ||
            x=='A'||x=='E'||x=='I'||x=='O'||x=='U') {

            printf("%c is a Vowel\n", x);
        } 
        else {
            printf("%c is a Consonant\n", x);
        }

    } else {
        printf("%c is not an alphabet character\n", x);
    }

    return 0;
}
