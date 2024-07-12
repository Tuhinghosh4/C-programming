#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of Ram:");
    scanf("%d", &a);
    printf("Enter the age of Shyam:");
    scanf("%d", &b);
    printf("Enter the age of Ajay:");
    scanf("%d", &c);
    if (a < b && a < c)
        printf("Ram is youngest.");
    else if (b < c && b < a)
        printf("Shyam is youngest.");
    else if (c < a && c < b)
        printf("Ajay is youngest.");
    return 0;
}