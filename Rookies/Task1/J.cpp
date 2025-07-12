// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++)
        cin>>arr[i];
        int mini=arr[0];
        int z=0;
    for(int i=0; i< n ;i++)
    {
      if(arr[i]< mini){
        mini= arr[i];
        }
    }
    for(int i=0;i<n ;i++){
      if(arr[i]==mini){
        z++;
        }
    }
    if (z%2!=0){
        cout<<"Lucky"<<endl;
    }
    else
     cout<<"Unlucky"<<endl;
    return 0;
}
