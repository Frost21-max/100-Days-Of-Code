#include <stdio.h>

int main() {
    int n, k, arr[10000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int curr = 0;
    for (int i = 0; i < k; i++)
        curr += arr[i];

    int max = curr;

    for (int i = k; i < n; i++) {
        curr += arr[i] - arr[i - k];
        if (curr > max) max = curr;
    }

    printf("%d\n", max);
    return 0;
}
