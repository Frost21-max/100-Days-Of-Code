#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error\n");
        return 0;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error\n");
        return 0;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("%s %d %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}
