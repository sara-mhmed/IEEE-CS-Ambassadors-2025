// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
     //abba
     //i  j
     string s;
      cin>>s;
      int sz=s.size();
      for(int i=0,j=sz-1;i<j;i++ , j--)
      {
          if(s[i] !=s[j])
          {
              cout<<"NO\n";
              return 0;
          }
      }
       cout<<"YES\n";
  return 0;
}

