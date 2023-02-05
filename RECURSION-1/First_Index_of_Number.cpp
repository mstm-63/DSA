#include<iostream>
using namespace std;

int F_Index(int n, int a[], int x){
    if(n==0)
        return -1;

    if(*(a)==x)
        return 0;
    
    int ans = F_Index(n-1, a+1, x);

    if(ans == -1)
    return ans;
    else
    return ans + 1;
        
}
  

int main(){
   int n;cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
    cin>>a[i];
   }
   int x;cin>>x;

   cout<<F_Index(n,a,x)<<endl;

   return 0;

    
} 
