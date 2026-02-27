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
    Print(N-1);
    cout<<N<<endl;
}

int main()
{
    int N;
    cin>>N;
   Print(N);

    system("pause");
    return 0;
}