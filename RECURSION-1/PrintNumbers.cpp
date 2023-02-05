#include<iostream>
using namespace std;

int p_num(int n){
    
    if(n == 0) return 0; // in return 0 there can be any integer untill it is used in calculation :)
    
    p_num(n-1);

    cout<<n<<" ";
}

int main(){

    int n;cin>>n;
    p_num(n);
    return 0;
}