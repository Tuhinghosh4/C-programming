#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    int max = INT_MIN;
    int indexi, indexj;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element(%d,%d):", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                indexi = i;
                indexj = j;
            }
        }
    }
    printf("The maximum value is %d and its corresponding index is (%d,%d)", max, indexi, indexj);
    return 0;
}