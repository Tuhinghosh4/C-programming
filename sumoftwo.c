#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main()
{
    int x,y,sum;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    sum = add(x,y);
    printf("%d",sum);
    return 0;
}