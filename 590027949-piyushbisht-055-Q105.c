#include <stdio.h>

int main() {
    int n, arr[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0, candidate = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = arr[i];

        if (arr[i] == candidate)
            count++;
        else
            count--;
    }

    int freq = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == candidate)
            freq++;

    if (freq > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
