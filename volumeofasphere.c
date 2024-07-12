#include<stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of the sphere:");
    scanf("%d",&radius);
    float volume= 4 * 3.1415 * radius * radius * radius / 3;
    printf("The volume of the sphere is %f",volume);
    return 0;
}