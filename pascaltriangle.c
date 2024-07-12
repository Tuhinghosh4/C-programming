#include <stdio.h>
int factorial(int a)
{
    int fact =1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            int ick = ncr(i, k);
            printf("%d ", ick);
        }
        printf("\n");
    }
}