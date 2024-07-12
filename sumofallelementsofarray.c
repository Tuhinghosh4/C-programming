#include <stdio.h>
int main()
{
    int a[10], sum = 0,i;
    for (i = 0; i < 10; i++)
    {
        int b = i + 1;
        printf("Enter element number %d:", b);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of all the elements of the array is %d", sum);
    return 0;
}