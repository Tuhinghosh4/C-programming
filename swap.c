#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a= *b;
    *b = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}