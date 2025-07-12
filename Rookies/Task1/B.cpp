// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int x;
    cin>>x;
    bool exist=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i<<endl;
            exist=1;
            break;
        }
    }
    if(!exist)
       cout<<-1<<endl;
    return 0;
}

