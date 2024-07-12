#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,i,k,l,m,A[100],j,a,b,c,d;
    srand(time(0));
    printf("Your password should contain at least 8 characters\n");
    printf("Enter the number of characters of your password:");
    scanf("%d",&n);
    if(n<8)
    {
        printf("Warning: You cannot form a password of less than 8 characters.");
        return 0;
    }
    printf("Your password should contain at least one digit, one aplhabet in upper case and one alphabet in lower case.\n");
    printf("Enter the number of digit you want for your password:");
    scanf("%d",&k);
    printf("Enter the number of upper case alphabets you want for your password:");
    scanf("%d",&l);
    printf("Enter the number of lower case alphabets you want for your password:");
    scanf("%d",&m);
    j=n-(k+l+m);
    if(k>=n||l>=n||m>=n)
    return 0;
    if(k>0&&l>0&&m>0)
    {
        for(a=0;a<k;a++)
        {
            A[a]=rand()%10+48;
            printf("*");
        }
        for(b=0;b<l;b++)
        {
            A[b]=rand()%26+65;
            printf("*");
        }
        for(c=0;c<m;c++)
        {
            A[c]=rand()%26+97;
            printf("*");
        }
/*        for(d=0;d<j;d++)
        {
            switch(rand()%4)
            {
                case 0:A[d]=rand()%48;break;
                case 1:A[d]=rand()%7+58;break;
                case 2:A[d]=rand()%7+90;break;
                case 3:A[d]=rand()%133+122;break;
            }
            printf("*");
        }*/
    }
    printf("\n Are you willing to see the password?\nThen press any key to continue.");
    getch();
    for(a=0;a<k;a++)
    {
        printf("%c",A[a]);
        getch();
    }
    for(b=0;b<l;b++)
    {
        printf("%c",A[b]);
        getch();
    }
    for(c=0;c<m;c++)
    {
        printf("%c",A[c]);
        getch();
    }
   /*for(d=0;d<j;d++)
    {
        printf("%c",A[d]);
        getch();
    }*/
    printf("Thank you for giving the password.");
    return 0;
}