#include<iostream>
#include<string>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}


void rev(int n){
    if(n==0){
        return ;
    }
    cout << n << " ";
    rev(n-1);
}



int main(){

    int answer = factorial(5);
    cout << answer << endl;

    rev(10);

    return 0;
}