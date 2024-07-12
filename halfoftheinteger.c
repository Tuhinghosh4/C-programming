#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    float b = a;
    float c = b/2;
    printf("The half of the integer %d is %f",a,c);
    return 0;
}