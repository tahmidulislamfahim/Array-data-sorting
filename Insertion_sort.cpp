#include<iostream>
using namespace std;
int main()
{
    int arr[6]={4,2,6,1,3,5};
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"sorted array: ";
    for ( i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }

}
