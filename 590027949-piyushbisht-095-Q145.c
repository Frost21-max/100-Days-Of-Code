#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student getTop(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    return s[maxIndex];
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    struct Student top = getTop(s, n);

    printf("%s %d %d\n", top.name, top.roll_no, top.marks);

    return 0;
}
