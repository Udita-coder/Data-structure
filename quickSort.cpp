//I have used quick sort to sort the array
// the worst case of quick sort is o(n^2)
// in this algorthim we choose highest valus as pivot and accordingly we will sort the array by having left node as lower than pivot and right as higher value than pivot

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

    int arr[] = {65,11,9,10,67,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"Sorted Array:";
    printArray(arr,n);
    return 0;
}
