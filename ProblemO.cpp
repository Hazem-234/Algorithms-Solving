#include <iostream>
#include <Vector>
using namespace std;

long long Fibonacci(int N)
{
    if(N==1)
    return 0;
    if(N==2)
    return 1;
    return Fibonacci(N-1) + Fibonacci(N-2);
    
}



int main()
{
    int N;
    cin>>N;
    cout << Fibonacci(N);
    system("pause");
    return 0;
}