#include<stdio.h>
int swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low,j;
    for(j=low+1;j<=high;j++)
    {
        if(arr[j]<=pivot)
        {
            i=i+1;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i],&arr[low]);
    return i;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int m = partition(arr,low,high);
        quicksort(arr,low,m);
        quicksort(arr,m+1,high);
        return;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The unsorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("\nThe sorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}