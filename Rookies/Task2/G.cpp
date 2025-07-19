#include <iostream>
using namespace std;
int main(){
      string s;
    cin>>s;
    int sz=s.size();
    for(int i=0;i<sz;i++)
    {
       if(s[i]==',')
          s[i]=' ';
       else if(s[i]>='A' && s[i]<='Z'){
         s[i]+=32;
       }
       else if(s[i]>='a' && s[i]<='z'){
         s[i]-=32;
       }
         cout<<s[i];
    }
  return 0;
}
