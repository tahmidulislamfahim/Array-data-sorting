#include<iostream>
using namespace std;
int main()
{
    int arr[6]={9,3,7,4,1,2};
    int i,j,temp;
    cout<<"Unsorted: ";
    for ( i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    for ( i = 0; i < 6; i++)
    {
        int temp=i;
        for ( j = i+1; j < 6; j++)
        {
            if (arr[temp]>arr[j])

                temp=j;
        }
        swap(arr[i],arr[temp]);



    }
    cout<<endl<<"Soreted array: ";
    for ( i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }


}
