#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int arr[SIZE], brr[SIZE],i,j,k;
void merge(int low,int mid,int high)
{
    i = low;
    j = mid+1;
    k = low;
    while( i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            brr[k] = arr[i];
            i++; 
        }
        else
        {
            brr[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while(j<=high)
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    else if(j>high)
    {
        while(i<=mid)
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
    }
    for(i=low;i<=high;i++)
    {
        arr[i] = brr[i];
    }
}
void merge_sort(int low, int high)
{
    int mid;
    if (low>=high) return;
    mid = (low+high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge(low,mid,high);
}
void print_array(int low, int high)
{
    for(i=low;i<high;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    printf("Enter the array: ");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The unsorted array is: ");
    print_array(0,SIZE);
    merge_sort(0,SIZE-1);
    printf("The sorted array is:");
    print_array(0,SIZE);
    return 0;
}