// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void shiftzeros(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        count++;
        else 
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<=count;i++)
      cout<<0<<" ";
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
      shiftzeros(arr,n);
    
    return 0;
}