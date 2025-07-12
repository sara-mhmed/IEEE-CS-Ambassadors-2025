// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int sum=0;
    for(int i=0;i<n;i++){
            sum+=(int)(arr[i]-'0');
        }
    cout<<sum<<endl;
    return 0;
}
