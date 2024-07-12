#include <stdio.h>
/*int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
        fact = fact * i;
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}*/
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int first = 1;
        for (int k = 0; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",first);
            first = first * (i - j) / (j + 1); // iC(j+1)
        }
        printf("\n");
    }
    return 0;
}