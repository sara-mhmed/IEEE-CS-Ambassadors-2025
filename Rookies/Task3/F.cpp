// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long equ(long long x,long long n){
    long long b=0;
    for(int i=2;i<=n; i+=2){
      b+=pow(x,i);
     } 
     return b;
}
int main() {
    long long x,n;
    cin>>x>>n;
   cout<< equ(x,n);
    return 0;
}