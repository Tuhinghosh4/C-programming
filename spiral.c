#include <stdio.h>
int main()
{
    int m;
    printf("Enter number of rows of the matrix:");
    scanf("%d", &m);
    int n;
    printf("Enter number of columns of the matrix:");
    scanf("%d", &n);
    printf("\n");
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the (%d,%d) element of the matrix:", i + 1, j + 1);
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
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n;
    int count = 0;
    while (count <= tne)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        //if (count >= tne)
            //break;
        for (int i = minr; i <= maxr&& count < tne; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        //if (count >= tne)
            //break;
        for (int j = maxc; j >= minc&& count < tne; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        //if (count >= tne)
            //break;
        for (int i = maxr; i >= minr&& count < tne; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}