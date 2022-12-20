#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp,i,j;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<< arr[n-2];
}