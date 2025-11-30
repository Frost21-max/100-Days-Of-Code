#include <stdio.h>

int main() {
    FILE *fp;
    char line[1000];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    printf("\n");
    fclose(fp);
    return 0;
}
