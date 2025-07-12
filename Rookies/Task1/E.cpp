// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n+1];
   for(int i=1; i<=n ; i++)
       cin>>arr[i];
       int mini=arr[0];
       int po=0;
       for(int i=1; i<=n ; i++){
       if(arr[i]< mini){
          mini= arr[i];
          po=i;
       }
       }
       cout<< mini <<" "<<po <<endl;
       
   
}