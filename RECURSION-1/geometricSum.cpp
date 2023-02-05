#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    
if (k == 0){
    return 1;
}
     
    return pow(0.5,k)+geometricSum(k-1);
}


int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}