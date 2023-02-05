#include<iostream>
using namespace std;

int L_Index(int n, int a[], int x){
    if(n==0)return -1;
    if(a[n] == x)return n;

    int ans = L_Index(n-1, a, x);
    
    if(ans == -1)return ans;
    else return ans;
        
}
  

int main(){

   int n;cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
    cin>>a[i];
   }
   int x;cin>>x;

   cout<<L_Index(n,a,x)<<endl;

   return 0;
  
} 
