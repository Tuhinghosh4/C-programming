#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int r;
    printf("Enter r:");
    scanf("%d", &r);
    int npr = factorial(n) / factorial(n - r);
    printf("%d", npr);
    return 0;
}