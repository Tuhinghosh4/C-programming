#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows & columns of the square matrix:");
    scanf("%d", &n);
    printf("\n");
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the (%d,%d) element of the matrix:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = n * n;
    int count = 0;
    int b[n][n];
    int i, j;
    while (count <= tne)
    {
        for (j = minc; j <= maxc && count < tne; j++)
        {
            b[minr][j] = a[minr][j];
            count++;
        }
        minr++;
        // if (count >= tne)
        // break;
        for (i = minr; i <= maxr && count < tne; i++)
        {
            b[i][maxc] = a[i][maxc];
            count++;
        }
        maxc--;
        // if (count >= tne)
        // break;
        for (j = maxc; j >= minc && count < tne; j--)
        {
            b[maxr][j] = a[maxr][j];
            count++;
        }
        maxr--;
        // if (count >= tne)
        // break;
        for (i = maxr; i >= minr && count < tne; i--)
        {
            b[i][minc] = a[i][minc];
            count++;
        }
        minc++;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}