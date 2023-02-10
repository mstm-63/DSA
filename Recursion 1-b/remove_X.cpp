#include<iostream>
using namespace std;

int len(char input[]){
    int l=0;
    for(int i=0; input[i] != '\0'; i++){
        l++;
    }
    return l;
}

void removex(char input[], int start){
    if(input[start] == '\0')return;

    removex(input, start+1);

    if(input[start] == 'x'){
    int l = len(input);
    int i;
    for( i=start+1; i<l; i++){
        input[i-1] = input[i]; 
    }
    input[i-1] = '\0';

    }
}

void removeX(char input[]){
    removex(input, 0);

    
}

int main(){
    char input[1000];
    cin>>input;
    removeX(input);
    cout<<input<<endl;

    return 0;
}