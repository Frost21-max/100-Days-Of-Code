#include <stdio.h>

int main() {
    FILE *fp;
    int n;
    char name[100];
    int roll, marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("%s %d %d\n", name, roll, marks);

    fclose(fp);

    return 0;
}
