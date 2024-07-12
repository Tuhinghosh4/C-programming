#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,i,A[100];
    srand(time(0));
    printf("Enter the number of characters for your password:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        switch(rand()%3)
        {
            case 0:A[i]=rand()%10+48;break;
            case 1:A[i]=rand()%26+65;break;
            case 2:A[i]=rand()%26+97;break;
        }
        printf("*");
    }
    printf("Are you willing to see the characters of the password?\n Then press any key to continue...\n");
    getch();
    for(i=0;i<n;i++)
    {
        printf("%c",A[i]);
        getch();
    }
    return 0;
}