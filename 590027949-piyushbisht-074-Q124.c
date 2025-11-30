#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcname[100], destname[100];
    int ch;

    scanf("%s", srcname);
    scanf("%s", destname);

    src = fopen(srcname, "r");
    dest = fopen(destname, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("Copied\n");
    return 0;
}
