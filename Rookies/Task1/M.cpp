// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int maxx = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i< n;i++){
        cin>>arr[i];
     maxx=max(maxx,arr[i]);
     mini=min(mini,arr[i]);
    }
    int mx,mm;
    for(int i=0;i< n;i++)
    {
       if(arr[i]==maxx)
        mx= i;
      else if(arr[i]==mini)
       mm=i;
    }
    swap(arr[mx],arr[mm]);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}

