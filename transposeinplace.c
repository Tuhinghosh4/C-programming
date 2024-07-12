#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows/columns of the matrix:");
    scanf("%d", &n);
    int arr[n][n];
    // int brr[c][r];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of (%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}