// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   while(n--)
   {
     string s,t;
     cin>>s>>t;
     int sz1=s.size();
     int sz2=t.size();
     int mini=min(sz1,sz2);
     for(int i=0;i<mini;i++)
     {
        cout<<s[i]<<t[i];
     }
     if(sz1<sz2)
     {
        cout<<t.substr(mini);
     }
     else if(sz2<sz1)
     {
         cout<<s.substr(mini);
     }
     cout<<"\n";
   }
    return 0;
}


