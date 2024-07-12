#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of objects:");
    scanf("%d",&n);
    printf("Enter the capacity of the knapsack:");
    scanf("%d",&m);
    float p[n],w[n],pw[n];
    printf("\nEnter the profits and weight of the objects:");
    for(i=0;i<n;i++)
    {
        printf("Enter the profit of object %d: ",i+1);
        scanf("%d",&p[i]);
        printf("Enter the weight of object %d: ",i+1);
        scanf("%d",&w[i]);
    }
    printf("Profit before sorting of Profit-weight ratio:");
    printf("\nObjects:\t");
    for(i=0;i<n;i++)
    {
        printf("Object%d\t",i+1);
    }
    printf("\nProfits:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",(int)p[i]);
    }
    printf("\nWeights:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",(int)w[i]);
    }
    for(i=0;i<n;i++)
    {
        pw[i]=p[i]/w[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=)
    }
}