#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int arr[],int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int number;
    cout<<"Enter No. of Elements in an Array:";
    cin>>number;
    int arr[number];
    for(int i=1;i<=number;i++)
    {
       cout<<"Enter Elements:";
       cin>>arr[i];
    }
    for(int i=1;i<=number;i++)
    {
        cout<<arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"Sorted Array:";
    printArray(arr,n);
    return 0;
}
