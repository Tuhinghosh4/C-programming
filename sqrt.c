#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int root = sqrt(a);
    printf("The square root of %d is: %d\n", a, root);
    int x, y;
    printf("Enter base:");
    scanf("%d", &x);
    printf("Enter power:");
    scanf("%d", &y);
    int q = pow(x, y);
    printf("%d", q);
    return 0;
}