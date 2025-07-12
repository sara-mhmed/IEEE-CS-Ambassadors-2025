// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    bool pali=1;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++)
        cin>>arr[i];
    for(int i=0,j=n-1;i<n && j>=0;i++,j--)
    {
        if(arr[i]!=arr[j]){
            pali=0;
            break;
        }
    }
    if(pali==1)
     cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    return 0;
}
