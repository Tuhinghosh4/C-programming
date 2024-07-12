#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d", &n);
    int x;
    printf("Enter the index which is missing: ");
    scanf("%d", &x);
    int arr[n];
    int sum = 0;
    int sum2 = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        if (i != x)
        {
            arr[i] = i + 1;
            printf("%d ", arr[i]);
            sum = sum + arr[i];
        }
    }
    printf("\nThe missing element is %d", sum2 - sum);
    return 0;
}