#include <stdio.h>

enum Gender { MALE = 1, FEMALE, OTHER };

struct Person {
    char name[100];
    enum Gender g;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", &p.g);

    if (p.g == MALE)
        printf("Male\n");
    else if (p.g == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
