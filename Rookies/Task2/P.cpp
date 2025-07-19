#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int sz=s.size();
    int count=1;
    for(int i=1;i<sz;i++)
    {
        if(!(s[i]>='A'&&s[i]<='z') && s[i+1]>='A' &&s[i+1]<='z')
            count++;
        else
            continue;
    }
    cout<<count;

    return 0;
}
