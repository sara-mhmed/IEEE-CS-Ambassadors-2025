// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i< n;i++)
        cin>>arr[i];
        int mini =INT_MAX;
    for(int i=0;i<=n;i++)
    {
       for(int j=i+1;j< n;j++)
       {
          mini=min(mini,(arr[i]+arr[j]+j-i));
           }
       }
       cout<<mini<<endl;
    }
    return 0;
}

