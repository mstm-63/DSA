#include<bits/stdc++.h>
using namespace std;

bool Palindrome_Helper(string s, int n){
    if(n==0 || n==1)return true;

    if(s[0] == s[n]){
    return Palindrome_Helper(s.substr(1),n-1);
    }

    else return false;
}

bool Palindrome(string s){
    int n = s.size();

    return Palindrome_Helper(s, n-1);
}

int main(){
    string s;cin>>s;

    cout<<Palindrome(s)<<endl;

    return 0;
}