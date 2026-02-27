#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


void Print(int N)
{
    if(N<=0)
    {
        return;
    }
    
    //I needed to solve the Last Space so it gets accepte on CodeForces
    if(N!=1)
    {
        cout<<N<<" ";
    }
    else
    {
        cout<<N;
    }
    Print(N-1);
    
}

int main()
{
    int N;
    cin>>N;
    Print(N);

    system("pause");
    return 0;
}