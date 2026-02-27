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
    cout<<N%10<<" ";
    Print(N/10);
}

int main()
{
    int N;
    cin>>N;
    Print(N);


    system("pause");
    return 0;
}