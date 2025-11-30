#include <stdio.h>

int main() {
    int n, arr[10000], freq[10000] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}
