#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%5==0&&n%3==0)
    {
        printf("%d is divisible by both 3 and 5",n);
    }
    else if(n%5==0&&n%3!=0)
    {
        printf("%d is divisible by 5 but not divisible by 3",n);
    }
    else if(n%5!=0&&n%3==0)
    {
        printf("%d is not divisible by 5 but divisible by 3",n);
    }
    else
    {
        printf("%d is neither divisible by 5 not divisible by 3");
    }
    return 0;
}