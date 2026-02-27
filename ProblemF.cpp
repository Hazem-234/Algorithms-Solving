
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//
void solve(vector<int> &A, int N)
{
   
    if(N<0) return; // base call for rexursion
    
    if(N%2==0) // is last index is even get it, if not tgen go to the previous
    {
        cout<<A[N]<<" "; // print the last even index
        
    }
    solve(A, N-1); // the recursive call, go to previous index, check, print if true and go to prev if false
}
int main()
{
    int N;
    cin>>N;
    vector<int> A(N);
     for(int i = 0; i < N;i++) // input of the array in main
    {
        cin>>A[i];
        
    }
    solve(A, N-1); //By Indexing Logic the last element in 4 elements vector is 3 not 4
    system("pause");
    return 0;
}