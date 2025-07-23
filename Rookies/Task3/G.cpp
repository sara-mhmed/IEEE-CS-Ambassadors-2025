#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min(int n,int arr[])
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;
}
int max(int n,int arr[])
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    return mx;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min(n,arr)<<" "<<max(n,arr)<<endl;
    
    return 0;
}