#include <stdio.h>

int main() {
    int r, c, i, j, arr[10][10], sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of matrix elements = %d", sum);
    printf("\n");
    return 0;
}
