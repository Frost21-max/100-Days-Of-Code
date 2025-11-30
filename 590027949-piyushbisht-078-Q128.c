#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d Consonants=%d\n", vowels, consonants);

    fclose(fp);
    return 0;
}
