#include<iostream>
using namespace std;

int Mul(int m, int n){
    if(m==0 || n==0)
    return 0;

    int ans = Mul(m-1,n);
    
    return ans+n;
}


int main(){
    int m,n;
    cin>>m>>n;

    cout<<Mul(m,n);

    return 0;
}