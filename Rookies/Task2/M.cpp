// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    //hello
    //j=0/h
    
    string s,z="hello";
     cin>>s;
     int j=0;
     int sz=s.size();
     for(int i=0;i<sz;i++)
     {
         if(s[i]==z[j])
            j++;
     }
     if(j==5)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    return 0;
}



