#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows of matrices:");
    scanf("%d", &r);
    printf("Enter number of columns of matrices:");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter (%d,%d) element of matrix 1:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter (%d,%d) element of matrix 2:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = a[i][j] + b[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}