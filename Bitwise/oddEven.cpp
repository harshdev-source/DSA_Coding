#include<iostream>
using namespace std;

void isOdd(int n){
    if(!(n & 1)){
        cout << "Number is Even!" << endl;
    }else{
        cout << "Number is Odd!" << endl;
    }
}

int main(){

    int n;
    cout << "Enter your number: ";
    cin >> n;

    isOdd(n);

    return 0;
}