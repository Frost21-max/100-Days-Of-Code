#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    printf("Chars=%d Words=%d Lines=%d\n", chars, words, lines);

    fclose(fp);
    return 0;
}
