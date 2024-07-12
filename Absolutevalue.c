#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The absolute value is %d",n);
    }
    else
    {
        printf("The absolute value is %d",(-1)*n);
    }
    return 0;
}