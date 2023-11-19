#include<iostream>
using namespace std;
void maxactivities(int start[],int finish[],int n)
{
    int i,j;
    cout<<"following activities are selected:\n";
    i=0;
    cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(start[j]>=finish[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}
int main()
{
    int size;
    cout<<"Input Size: ";
    cin>>size;
    int start[size];
    int finish[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Input start,finish of activity "<<i<<": ";
        cin>>start[i]>>finish[i];
    }
    maxactivities(start,finish,size);
    return 0;
}