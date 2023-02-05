#include<iostream>
using namespace std;


int length(char input[]){
    int len=0;
    for(int i=0; input[i] != '\0'; i++){
        len++;
    }
    return len;
}


bool palindromeHelper(char input[], int s, int e){
    if(s>e)return true;

    if(input[s] == input[e]){
        return palindromeHelper(input, s+1, e-1);
    }

    else return false;
}


bool Palindrome(char input[]){
    int len=length(input);

    return palindromeHelper(input,0,len-1);
}



int main(){
    char input[100];
    cin>>input;

    if(Palindrome(input)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}