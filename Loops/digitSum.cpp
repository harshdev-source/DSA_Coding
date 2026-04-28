#include<iostream>
using namespace std;

int main(){
    int n=10829;
    int count=0;
    while (n!=0){
        int lastDig = n%10;
        count = count+lastDig;
        n=n/10;
    }
    cout<<"Sum= "<<count<<endl;
    
    return 0;
}