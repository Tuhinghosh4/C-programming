#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i,a;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        a=(i*(i+1))/2;
        if(i%2==0)
        {
            sum=sum-a;
        }
        else
        {
            sum=sum+a;
        }
    }
    printf("The sum of the series is %d ",sum);
    return 0;
}