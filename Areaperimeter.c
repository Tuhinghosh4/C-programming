#include<stdio.h>
int main()
{
    int l;
    printf("Enter length:");
    scanf("%d",&l);
    int b;
    printf("Enter length:");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p)
    {
        printf("Area is greater than perimeter");
    }
    else if(a==p)
    {
        printf("Area is equal to perimeter");
    }
    else
    {
        printf("Area is lesser than perimeter");
    }
    return 0;
}