// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
       cout<<b[i]<<" ";
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
}
int main() {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=0;i<n;i++)
       cin>>b[i];
    print (a,b,n);
 
    return 0;
}