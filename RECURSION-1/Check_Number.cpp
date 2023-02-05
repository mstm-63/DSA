#include<iostream>
using namespace std;

bool check_Number(int n, int a[], int x){
    if(n==0)return false;

    if ((n == 1)&&(*(a) == x)){
      return true;
    }

    // if(a[0] == x)
    //     return true;

    bool ans = check_Number(n-1, a+1, x);

    if(a[0] == x)
        return true;

    return ans;
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;cin>>x;

    cout<<check_Number(n,a,x)<<endl;
}