#include <stdio.h>

int main() {
    int r, c, i, j, flag = 1;
    int arr[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("False");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(arr[i][j] != arr[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("True");
    else
        printf("False");
    printf("\n");
    return 0;
}
