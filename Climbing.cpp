#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// It is the same as the Fibonacci Sequence

int Climbing(int N)
{
    if(N==1)
    return 1;
    if(N==2)
    return 2;
    return Climbing(N-1) +Climbing(N-2);
}
int main()
{
    int N;
    cin>>N;
    cout<<Climbing(N);
    system("pause");

    return 0;
}
