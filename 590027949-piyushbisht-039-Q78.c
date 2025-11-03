#include <stdio.h>

int main()
{
    int r, c, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r != c)
    {
        printf("Matrix must be square.\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        sum += arr[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);
    printf("\n");
    return 0;
}
