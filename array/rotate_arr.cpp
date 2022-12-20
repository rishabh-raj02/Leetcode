#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    int j=0;
    k=k%n;//k can be greater than n
    int ans[5];
    for(int i=n-k;i<n;i++){
        ans[j++]=ans[i];
    }
    for(int i=0;i<=k;i++){
        ans[j++]=arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}