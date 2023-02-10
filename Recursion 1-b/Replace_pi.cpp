#include<iostream>
using namespace std;

int len(char input[]){
    int l=0;
    for(int i=0; input[i] != '\0'; i++){
        l++;
    }
    return l;
}

void replace_Pi(char input[]){
    int l = len(input);
    if(l==0 || l==1){
        return;
    }
    if(input[0] == 'p' && input[1] == 'i'){
        for(int i=l-1; i>0; i--){
            input[i+2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replace_Pi(input);

    }
    else return replace_Pi(input+1);
}

int main(){
    char input[1000];
    cin>>input;
    replace_Pi(input);
    cout<<input<<endl;

    return 0;
}
