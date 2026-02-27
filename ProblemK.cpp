#include <iostream>
using namespace std;

int findMax(int arr[], int N)
{
    if(N==1) return arr[0];
    int maxN = findMax(arr, N-1);
    return max(arr[N-1], maxN);

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
    int result = findMax(arr, N);
    cout<<result<<endl;
    system("pause");
    return 0;
}