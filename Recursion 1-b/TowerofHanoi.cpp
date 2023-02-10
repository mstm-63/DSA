#include<iostream>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c){
    if(n==0)
    return;

     towerOfHanoi(n-1, a, c, b);
        cout<<a<<" "<<c<<endl;
    
     towerOfHanoi(n-1, b, a, c );
}

int main(){
    int n;
    cin>>n;

    towerOfHanoi(n,'a','b','c');

    return 0;

}