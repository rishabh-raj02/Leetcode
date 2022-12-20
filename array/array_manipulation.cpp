//Find the unique number of given array where all the elements are being repeated twice with one value being unique
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    int unique=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}