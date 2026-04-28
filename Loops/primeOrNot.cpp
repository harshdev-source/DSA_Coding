#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    bool isPrime =true;

    for(int i=2;i<=n-1; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime==true){
        cout<<"Number is Prime"<<endl;
    }else{
        cout<<"Number is not Prime"<<endl;
    }
    
    return 0;
}