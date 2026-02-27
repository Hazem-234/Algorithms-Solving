
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Inverse Pyramid
void stars(int Stcount)
{
    if(Stcount==0) return;
    cout<<"*";
    stars(Stcount-1);
}
void spaces(int Scount)
{
    if(Scount==0) return;
    cout<<" ";
    spaces(Scount-1);
}
void Pyramid(int rows, int total)
{
    if(rows == total) return;
    spaces(rows);
    stars(2*(total-rows)-1);
    cout<<endl;
    Pyramid(rows + 1, total);
}
int main()
{
    int N;
    cin>>N;
    Pyramid(0, N);
    system("pause");
    return 0;
}