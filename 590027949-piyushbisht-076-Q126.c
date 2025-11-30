#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], line[1000];

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    printf("\n");
    fclose(fp);
    return 0;
}
