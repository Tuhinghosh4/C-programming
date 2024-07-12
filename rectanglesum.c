#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int l1, r1, l2, r2;
    printf("Enter the 1st co-ordinate:");
    scanf("%d %d", &l1, &r1);
    printf("Enter the 2nd co-ordinate:");
    scanf("%d %d", &l2, &r2);
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
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("\n The sum of the given rectangle is %d", sum);
    return 0;
}