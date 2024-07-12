#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c], sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element(%d,%d):", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("\n The sum of the given matrix is %d", sum);
    return 0;
}