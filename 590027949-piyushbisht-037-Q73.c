#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10], rowSum[10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j];
        }
    }

    printf("Row sums: ");
    for(i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;
}
