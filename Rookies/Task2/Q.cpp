// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    while(cin>>s){
       reverse(s.begin(),s.end());
       if(count){
        cout<<" ";
       }
       count=1;
       cout<<s;
    }
    return 0;
}




