#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    for (int i = 0; i < 5; i++)
        printf("%s %d %d\n", s[i].name, s[i].roll_no, s[i].marks);

    return 0;
}
