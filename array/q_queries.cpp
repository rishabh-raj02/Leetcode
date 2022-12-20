//Given q queries ,check all if the given number is present in array or not
//Note: value of all the element in the array is less than 10 to the power 5
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>v[i];
    }
    const int N= 1e5+10;
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    cout<<"Enter queries";
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int query;
        cin>>query;
        cout<<freq[query]<<endl;
        cout<<freq[query]<<endl;
    }
    
}