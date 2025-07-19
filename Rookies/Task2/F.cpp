// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
      while(T--){
      string s;
      cin>>s;
      int sz=s.size();
     if(sz<=10)
      cout<<s<<"\n";
    else
     cout<<s[0]<<sz-2<<s[sz-1]<<"\n";
      }
  return 0;
}

