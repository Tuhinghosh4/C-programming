#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 4, count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > x)
        {
            count++;
            printf("%d\n", arr[i]);
        }
        else
            continue;
    }
    printf("count = %d", count);
    return 0;
}