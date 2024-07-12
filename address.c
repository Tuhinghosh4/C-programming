#include <stdio.h>
int main()
{
    int arr[5] = {1, 1, 2, 1, 1};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);
    printf("%p\n", &arr[5]);
    return 0;
}
// 0061FF0C
// 0061FF10
// 0061FF14
// 0061FF18
// 0061FF1C
// 0061FF20