#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers\n");
        return 0;
    }

    printf("Sum=%d Avg=%.2f\n", sum, (float)sum / count);

    return 0;
}
