// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void prime(long long n){
    bool ch=0;
    for(int i=2;i*i<=n;i++){
    if(n%i==0){
      ch=1;
      break;
    }
    }
    if(ch==0)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        prime(n);
    }
    return 0;
}