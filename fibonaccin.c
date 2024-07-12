#include <stdio.h>
void fibonacci(int a)
{
    int x = 1;
    int y = 1;
    int sum = 1;
    for (int i = 1; i <= 2; i++)
    {
        printf("The %d th fibonacci number is %d\n", i, sum);
    }
    for (int i = 1; i <= a - 2; i++)
    {
        sum = x + y;
        x = y;
        y = sum;
        printf("The %d th fibonacci number is %d\n", i+2, sum);
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}