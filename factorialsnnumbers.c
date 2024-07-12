#include <stdio.h>
void factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
        printf("The factorial of %d is %d\n", i, fact);
    }
    return;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    factorial(n);
    return 0;
}