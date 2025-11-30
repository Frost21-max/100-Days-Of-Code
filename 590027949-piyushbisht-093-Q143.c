#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("%s %d %d\n", s[maxIndex].name, s[maxIndex].roll_no, s[maxIndex].marks);

    return 0;
}
