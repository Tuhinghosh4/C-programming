#include<stdio.h>
#include<stdlib.h>
int main()
{
	srand(time(0));
	int i,n,A[100],pos,value;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	{
		A[i]=rand()%100;
	    printf("%d\n",A[i]);
	}
	printf("Enter the position to add another number:");
	scanf("%d",&pos);
	printf("Enter the number:");
	scanf("%d",&value);	
	for(i=n;i>=pos;i--)
	{
		A[i]=A[i-1];
    }
    A[pos]=value;
    printf("The numbers with new values are:\n");
    for(i=0;i<=n;i++)
    {
	    printf("%d\n",A[i]);
    }
	return 0;
}