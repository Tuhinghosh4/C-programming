#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i,min,max,A[100];
	//srand(time(0));
	printf("Enter the number of values for n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		A[i]=(rand())%100;
		printf("%d\n",A[i]);
		max=min=A[0];
	}
	for(i=0;i<n;i++)
	{
		if(A[i]>max)max=A[i];
		if(A[i]<min)min=A[i];
	}
	printf("\nThe maximum value is %d",max);
    printf("\nThe minimum value is %d",min);
	return 0;
}