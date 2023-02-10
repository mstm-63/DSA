#include<iostream>
using namespace std;

int length(char input[]){
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    return len;
}

void PairStar(char input[]){

    int len  = length(input);

    if(len == 1)
        return;
    if(input[0] == input[1]){
        for(int i=len; i>=1; i--){
            input[i+1] = input[i];
        }
        input[1] ='*';
    }
    PairStar(input+1);
}

int main(){
    char input[1000];
    cin>>input;
    PairStar(input);
    cout<<input<<endl;

    return 0;
}