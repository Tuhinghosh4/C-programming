#include<stdio.h>                                                                            
int i,max,min;
void max_min(int arr[],int low, int high)
{
    max=min=arr[0];
    int max1,min1,max2,min2;
    if(low==high)
    {
        max=min=arr[low];
    }
    else if(low==high-1)
    {
        if(arr[low]<arr[high])
        {
            max=arr[high];
            min=arr[low];
        }
        else
        {
            max=arr[low];
            min=arr[high];
        }
    }
    else
    {
        int mid=(low+high)/2;
        max_min(arr,low,mid);
        max1=max;
        min1=min;
        max_min(arr,mid+1,high);
        max2=max;
        min2=min;
        if(max1<max2)
            max=max2;
        else
            max=max1;
        if(min1<min2)
            min=min1;
        else
            min=min2;
        return;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    max=min=arr[0];
    max_min(arr,0,n-1);
    printf("\nThe maximum of the array is: %d",max);
    printf("\nThe minimum of the array is: %d",min);
    return;
}