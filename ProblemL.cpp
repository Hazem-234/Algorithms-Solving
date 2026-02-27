#include <iostream>
using namespace std;

int findSum(int arr[], int N)
{
    if(N==0)
    {
        return 0;
    } 
    return arr[N-1] + findSum(arr, N-1);

}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int result = findSum(arr, N);
    cout<<result<<endl;
    system("pause");
    return 0;
}