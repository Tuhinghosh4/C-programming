#include <stdio.h>
int main()
{
    int m;
    printf("Enter number of rows of 1st matrix:");
    scanf("%d", &m);
    int n;
    printf("Enter number of columns of 1st matrix:");
    scanf("%d", &n);
    printf("\n");
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the (%d,%d) element of 1st matrix:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int p;
    printf("Enter number of rows of 2nd matrix:");
    scanf("%d", &p);
    int q;
    printf("Enter number of columns of 2nd matrix:");
    scanf("%d", &q);
    printf("\n");
    int b[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the (%d,%d) element of 2nd matrix:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if (n != p)
    {
        printf("The matrices cannot be multiplied.");
    }
    else
    {
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("The resultant matrix is:\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}