#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    cin>>N;
    int arr[N];
    while(T>0) {
        for(int i = 0;i<N;i++)
            cin>>arr[i];
        sort(arr, arr+N);
        int res = arr[N-1]*arr[N-2];
        cout<<res;
        T--;
    }
    return 0;
}
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            break;
}