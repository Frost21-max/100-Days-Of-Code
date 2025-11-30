#include <stdio.h>

int main() {
    int m, n, a[10000], b[10000], res[20000];
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] < b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }

    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];

    for (int x = 0; x < k; x++)
        printf("%d ", res[x]);

    printf("\n");
    return 0;
}
