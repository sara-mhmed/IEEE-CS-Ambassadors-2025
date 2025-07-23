// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
void swaping(int &x,int &y) {
    swap(x,y);
}

int main() {
    int x,y;
    cin>>x>>y;
    swaping(x,y);
    cout<<x<<" "<<y;
        
    return 0;
}
