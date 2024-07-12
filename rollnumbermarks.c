#include <stdio.h>
int main()
{
    int r, c = 2;
    printf("Enter number of students:");
    scanf("%d", &r);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("Enter the roll number of student %d:", i + 1);
            scanf("%d", &arr[i][0]);
            printf("Enter his/her marks:");
            scanf("%d", &arr[i][1]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}