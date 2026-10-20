#include<iostream>
using namespace std;

int natSum(int n){
    if(n==1){
        return 1;
    }
    return n + natSum(n-1);
}

int main(){
    cout<<natSum(9)<<endl;
    return 0;
}