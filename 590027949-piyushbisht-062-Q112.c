#include <stdio.h>

int main() {
    int n, arr[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0];
    int curr = arr[0];

    for (int i = 1; i < n; i++) {
        if (curr < 0)
            curr = arr[i];
        else
            curr += arr[i];

        if (curr > maxSoFar)
            maxSoFar = curr;
    }

    printf("%d\n", maxSoFar);
    return 0;
}
