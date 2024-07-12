#include <stdio.h>
#include <limits.h>

int main()
{
    int r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c], maxSum = INT_MIN, maxIndex;
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
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        printf("The sum of row %d is %d\n", i, sum);
        if (sum > maxSum)
        {
            maxSum = sum;
            maxIndex = i;
        }
    }
    printf("\nThe maximum sum of the row of the given matrix is %d and the row number is %d", maxSum, maxIndex);
    return 0;
}