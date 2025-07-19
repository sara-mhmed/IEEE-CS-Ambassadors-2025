// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int q;
   cin>>q;
   string Original= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
   string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
   string s;
   cin>>s;
   if(q==1){
       for(int i=0;i<s.size();i++){
           for(int j=0;j<Original.size();j++){
               if(s[i]==Original[j]){
                cout<<Key[j];
                break;
               }
           }
       }
   }
   else {
       for(int i=0;i<s.size();i++){
           for(int j=0;j<Key.size();j++){
               if(s[i]==Key[j]){
                 cout<<Original[j];
                 break;
               }
           }
       }
   }
    return 0;
}