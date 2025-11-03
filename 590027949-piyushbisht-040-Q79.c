#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[100][100];
    int ans[10000];
    int idx = 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int d = 0; d < r + c - 1; d++)
    {
        int temp[100], k = 0;
        int row = (d < c) ? 0 : d - c + 1;
        int col = (d < c) ? d : c - 1;

        while (row < r && col >= 0)
        {
            temp[k++] = a[row][col];
            row++;
            col--;
        }

        if (d % 2 == 0)
        {
            for (int i = 0; i < k; i++)
                ans[idx++] = temp[i];
        }
        else
        {
            for (int i = k - 1; i >= 0; i--)
                ans[idx++] = temp[i];
        }
    }

    printf("Diagonal traversal: ");
    for (int i = 0; i < idx; i++)
        printf("%d ", ans[i]);
    printf("\n");

    return 0;
}
