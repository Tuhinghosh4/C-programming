#include<stdio.h>
int main()
{
    float x;
    printf("Enter a decimal number:");
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("The fractional part of %f is %f",x,z);
    return 0;
}