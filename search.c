#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {12, 21, 21, 42, 21, 6, 7};
    int x = 420;
    int idx = -1;
    bool flag = false; // false means not present
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // true means element is present
            idx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array.", x);
    }
    else
    {
        printf("%d is present in the arrayand its index is %d", x,idx);
    }
    return 0;
}