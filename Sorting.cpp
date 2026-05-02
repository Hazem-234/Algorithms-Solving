#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for(int i = 0; i < n-1; i++)
    {
        swapped = false;
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }
}
void SelectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] <  arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}
void InsertionSort(int arr[], int n)
{
    for(int i=1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j]> key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void print(int arr[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    print(arr, n);
    cout<<"-------------------";
    SelectionSort(arr, n);
    print(arr, n);
    cout<<"----------------------------";
    InsertionSort(arr, n);
    print(arr, n);
    cout<<"----------------------";

    system("pause");
    return 0;
}