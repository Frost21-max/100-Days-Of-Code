#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    int m;
    scanf("%d", &m);

    int days;

    if (m == JAN || m == MAR || m == MAY || m == JUL || m == AUG || m == OCT || m == DEC)
        days = 31;
    else if (m == APR || m == JUN || m == SEP || m == NOV)
        days = 30;
    else if (m == FEB)
        days = 28;
    else {
        printf("Invalid\n");
        return 0;
    }

    printf("%d\n", days);
    return 0;
}
