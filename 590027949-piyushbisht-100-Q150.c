#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    // Input format: John 106 91
    scanf("%s %d %d", p->name, &p->roll, &p->marks);

    // Output
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           p->name, p->roll, p->marks);

    return 0;
}
