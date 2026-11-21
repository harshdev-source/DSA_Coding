#include<iostream>
// #include<string>
using namespace std;

int friendsPair(int n){
    if(n==1 || n==2){
        return n;
    }   

    return friendsPair(n-1) /*Single*/ + (n-1) * friendsPair(n-2);// Pairing
}

int main(){
    
    int n = 4;
    cout << friendsPair(n) << endl;

    return 0;
}