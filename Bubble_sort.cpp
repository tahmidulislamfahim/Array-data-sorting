#include<stdio.h>
void bubblesort(int array[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int arr[10],size;
    printf("input size: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    bubblesort(arr,size);
    printf("sorted array: ");
    print(arr,size);
}