#include<iostream>
using namespace std;

long long pow(int x, int n){
    if(n == 0){
        return 1;
    }

    int halfPow = pow(x, n/2);
    int halfPowSq = halfPow * halfPow;

    if(n%2!=0){
        // Odd N
        return halfPowSq * x;
    }
    // Even N
    return halfPowSq;
}



int main(){
    
    cout << pow(9, 10)<<endl;

    return 0;
}