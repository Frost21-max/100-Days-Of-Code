#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int diag[10];
    int k = 0, flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("Matrix must be square.\n");
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
        diag[k++] = arr[i][i];
    }

    for(i = 0; i < r; i++) {
        for(j = i + 1; j < r; j++) {
            if(diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    printf("Are diagonal elements distinct? ");
    if(flag == 1)
        printf("True");
    else
        printf("False");
    printf("\n");
    return 0;
}
