#include <iostream>
using namespace std;


int countZeros(int n) {
    

    if((n>=1)&&(n<=9)){
        return 0;
    }
    
    if(n==0){
        return 1;
    }
    
    
    if(n%10 == 0){
       return countZeros(n/10)+1;
    }
    
    return countZeros(n/10);
     

}


int main() {
   int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
