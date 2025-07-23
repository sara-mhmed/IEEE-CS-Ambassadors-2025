// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int arr[],int n)
{
    int maxx=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }
    return maxx;
}
int min(int arr[],int n)
{
    int minn=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minn)
        {
            minn=arr[i];
        }
    }
    return minn;
}
bool prime(int x){
    if (x<=1)
    return 0;
    for(int i=2;i*i<=x;i++){
    if(x%i==0)
       return 0;
    }
    return 1;
    }
bool palindrome(int x)
{
    int temp=x,reverse=0;
    while(temp!=0){
        int digit=temp %10;
        reverse+=digit;
        reverse*=10;
        temp/=10;
    }
    reverse/=10;
    if(x==reverse)
    return 1;
    else 
    return 0;
    
}
int numdivisor(int x)
{
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0)
        count++;
    }
    return count;
}
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int count_prime=0,count_palindrome=0;
     int mx_num=arr[0];
     int numdiv=numdivisor(arr[0]);
     for(int i=0;i<n;i++){
         if(prime(arr[i])==1)
           count_prime++;
     }
     for(int i=0;i<n;i++){
         if(palindrome(arr[i])==1)
           count_palindrome++;
     }
     for(int i=0;i<n;i++){
         if(numdivisor(arr[i]) > numdiv){
             numdiv=numdivisor(arr[i]);
             mx_num=arr[i];
         }
         else if(numdivisor(arr[i]) == numdiv){
             if(arr[i]>mx_num)
             mx_num=arr[i];
         }
     }
     cout<<"The maximum number : "<<max(arr,n)<<endl;
     cout<<"The minimum number : "<<min(arr,n)<<endl;
     cout<<"The number of prime numbers : "<<count_prime<<endl;
     
     cout<<"The number of palindrome numbers : "<<count_palindrome<<endl;
     
     cout<<"The number that has the maximum number of divisors : "<<mx_num<<endl;

    return 0;
}