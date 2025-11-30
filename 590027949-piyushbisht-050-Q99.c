#include <stdio.h>

int main() {
    char date[20];
    int d, m, y;

    fgets(date, sizeof(date), stdin);
    sscanf(date, "%d/%d/%d", &d, &m, &y);

    char *mon[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("%02d-%s-%04d\n", d, mon[m], y);

    return 0;
}
