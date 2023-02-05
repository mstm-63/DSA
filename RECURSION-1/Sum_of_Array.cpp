#include<iostream>
using namespace std;

int sum(int n, int a[]){
    if(n==0)
    return 0;

    int out = sum(n-1,a+1);

    return a[0]+out;

}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<sum(n,a)<<endl;

    return 0;
}