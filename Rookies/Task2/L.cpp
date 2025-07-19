// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--)
    {
        string x;
        cin>>x;
        if(x=="pop_back"){
            s.pop_back();
        }else if(x=="front"){
            cout<<s.front()<<"\n";
        }else if(x=="back"){
            cout<<s.back()<<"\n";
        }else if(x=="sort"){
            long long l,r;
            cin>>l>>r;
            l--,r--;
            long long mx=max(l,r), minn=min(l,r);
            sort(s.begin()+minn,s.begin()+mx+1);
        }else if(x=="reverse"){
            long long l,r;
            cin>>l>>r;
            l--,r--;
            long long mx=max(l,r) , minn=min(l,r);
            reverse (s.begin()+minn,s.begin()+mx+1);
            
        }else if(x=="print"){
            long long pos;
            cin>>pos;
            pos--;
            cout<<s[pos]<<"\n";
        }else if(x=="substr"){
            long long l,r;
            cin>>l>>r;
            l--,r--;
            long long mx=max(l,r) , minn=min(l,r);
           cout<<s.substr(minn,mx-minn+1)<<"\n";
            
        }
        else{
            char z;
            cin>>z;
            s.push_back(z);
        }
        
    }
    return 0;
}




