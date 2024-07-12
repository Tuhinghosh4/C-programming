#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,c,remainder;
    double sum;
    printf("The Armstrong numbers are:\n");
    for(i=1;i<=500;i++)
    {
        x=i;
        c=0;
        while(x!=0)
        {
            x=x/10;
            c++;
        }  
        y=i;
        sum=0;
        remainder=0;
        while(y!=0)
        {
            remainder=y%10;
            sum=sum+pow(remainder,c);
            y=y/10;
        }
        if(sum==i)
        {
        printf("\t%d\n",(int)sum);
        }
    }
     return 0;
}