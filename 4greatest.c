#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &c);
    printf("Enter a number:");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is greatest", b);
    }

    else if (c > a && c > b && c > d)
    {
        printf("%d is greatest", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is greatest", d);
    }
    return 0;
}