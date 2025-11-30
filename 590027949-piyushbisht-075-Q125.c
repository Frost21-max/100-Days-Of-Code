#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[1000];

    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    getchar();  // clear leftover newline

    fgets(line, sizeof(line), stdin);
    fprintf(fp, "%s", line);

    fclose(fp);

    printf("Appended\n");
    return 0;
}
