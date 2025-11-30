#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    int r;
    scanf("%d", &r);

    if (r == ADMIN)
        printf("Admin Access\n");
    else if (r == USER)
        printf("User Access\n");
    else if (r == GUEST)
        printf("Guest Access\n");
    else
        printf("Invalid\n");

    return 0;
}
