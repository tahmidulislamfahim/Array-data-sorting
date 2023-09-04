//Merge_Sort
#include<iostream>
using namespace std;
void merge(int *arr, int left, int middle, int right)
{
    int i,j,k;
    int n1=middle-left+1;
    int n2=right-middle;
    int arrleft[n1],arrright[n2];
    for(i=0;i<n1;i++)
        arrleft[i]=arr[left+i];
    for(j=0;j<n2;j++)
        arrright[j]=arr[middle+1+j];
    i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(arrleft[i]<=arrright[j])
        {
            arr[k]=arrleft[i];
            i++;
        }
        else
        {
            arr[k]=arrright[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arrleft[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arrright[j];
        j++;
        k++;
    }
}
void merge_sort(int *arr, int left, int right)
{
    if(left<right)
    {
        int middle=left+(right-left)/2;
        merge_sort(arr,left,middle);
        merge_sort(arr,middle+1,right);
        merge(arr,left,middle,right);
    }
}
int main()
{
    int arr[]={9,6,12,21,11,44,27,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}