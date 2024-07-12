#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,a;
	a=0;
	for(i=1;i<=127;i++)
	{
		printf("%d=%c\n",i,i);
		a++;
	    if(a%25==0)
        {
    	   getch();
		   system("cls");
	    }
    }
    return 0;
}