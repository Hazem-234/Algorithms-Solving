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
    cout<<"I love Recursion"<<endl;
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