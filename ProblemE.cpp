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
    Print(N/2);
    cout<<N%2;
    
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int N;
    cin>>N;
    if(N ==0)
    cout<<0;
    else
    {
        Print(N);
        cout<<endl;
    }
    

    }


    system("pause");
    return 0;
}