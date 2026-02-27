#include <iostream>
#include<algorithm>
#include<vector>
#include <set>
#include <string>
using namespace std;
/*
Learning Goals: 
Pallindrome array using  Recursion;
*/
bool Recursions(int arr[], int start, int end)
{
    if(start >= end)
    return true;
    else if (arr[start] != arr[end])
    return false;
    return Recursions(arr, start+1, end-1);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    
    if(Recursions(arr, 0, n-1))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    system("pause");
    return 0;
}