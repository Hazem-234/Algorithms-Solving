#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge2(vector<int> &arr, int left, int mid, int right)
{
    //Make a Container for Swapping
    vector<int> temp;
    //the Left and Right Halves for transversing
    int i = left, j = mid + 1;

    while(i <= mid && j <= right)
    {
     if(arr[i] <= arr[j])
    {
        temp.push_back(arr[i++]);
    }
    else
    {
        temp.push_back(arr[j++]);
    }
    }

    //Handling the Leftovers
    while(i<=mid) temp.push_back(arr[i++]);
    while(j<=right) temp.push_back(arr[j++]);

    for(int k = 0 ; k < temp.size(); k++)
    {
        arr[left + k] = temp[k];
    }

}

void mergeSort(vector<int> &arr, int left, int right)
{
    if(left>=right) return;
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge2(arr, left, mid, right);
   // merge1(arr, left, mid, right)
}
int BinarySearch(const vector<int> &arr, int left, int right, int target)
{
    if(left > right)
    return -1;

    int mid = left + (right - left) / 2;

    if(arr[mid] == target)
    return mid;

    if(arr[mid] < target)
    return BinarySearch(arr, mid+ 1, right, target);

    return BinarySearch(arr, left, mid - 1, target);
}

int main()
{
    int n;
    cout<<"Enter the Number of Elements"<<endl;
    cin >> n;

    vector<int> arr(n);
    cout<<"Enter the Elements"<<endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, arr.size() - 1);
    

    for (int x : arr) cout << x << " ";
    cout << endl;

    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    int result = BinarySearch(arr, 0, arr.size()-1, target);
    cout<<result<<endl;

    system("pause");
    return 0;
}