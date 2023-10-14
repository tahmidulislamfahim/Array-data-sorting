#include<iostream>
using namespace std;
void printmaxactivities(int s[],int f[],int n)
{
    int i,j;
    cout<<"following activities are selected:\n";
    i=0;
    cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }

}
int main()
{
    int s[]={0,1,2,3,6,9};
    int f[]={1,2,4,5,8,11};
    int n=sizeof(s)/sizeof(s[0]);
    printmaxactivities(s,f,n);
    return 0;
}