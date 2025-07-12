#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    
    long long sum =0;
    long long arr[m];
    
    for(int i=0;i<m ;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
        cout<<abs(sum)<<endl;;
    return 0;
}
