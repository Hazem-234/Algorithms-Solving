#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Without Using Recursion
int LinearSearch(const vector<int> &arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
        return i;
        
    }
    return -1;
}

//Using Recursion
int SequentialSearch(const vector<int> &arr, int target, int i)
{
    if(i==arr.size()) return -1;
    if(arr[i] == target) return i;
    SequentialSearch(arr, target, i +1);
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
    cout<<"Enter Number of Elements"<<endl;
     int n;
    cin >> n;

    cout<<"Enter the Elements"<<endl;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Enter the Desired Number"<<endl;
    int target;
    cin>>target;



    sort(arr.begin(), arr.end());

    int result = BinarySearch(arr, 0, arr.size() - 1, target);
    cout<<result;

    system("pause");
    return 0;
}