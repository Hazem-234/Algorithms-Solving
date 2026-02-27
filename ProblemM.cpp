#include <iostream>
#include<algorithm>
#include<vector>
#include <set>
#include <string>
using namespace std;
/*
Learning Goals: 
This was a solution to the problem I solved in August 2025
*/
long long Find(int arr[], int N, int M)
{
   
    if(M==0)
    return 0;
    
    return arr[N-1] + Find(arr, N-1, M-1); 
    // You have to return the result plus the recursive call not Sum Variable
}
int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin>>arr[i];
    }
   // int startIndex = n-m;
    long long result = Find(arr, n, m);
    cout<<result;
    system("pause");
    return 0;
}