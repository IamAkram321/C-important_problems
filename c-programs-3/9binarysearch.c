#include<stdio.h>
int binarySearch(int arr[],int size,int element)
{
int low=0,mid,high=size-1;
  while (low<=high)
{
    mid=(low+high)/2;
    if (arr[mid]==element)
    {
        return mid;
    }
    if (arr[mid]<element)
    {
        low=mid+1;
    }
    else
    high=mid-1;
}
  
}
int main(){
    int arr[]={1,34,56,78,89,90,234,444,555};
    int size=9;
    int element=444;
    int searchIndex=binarySearch(arr,size,element);
    printf("The element %d was found at index %d",element,searchIndex);
    return 0;
}
