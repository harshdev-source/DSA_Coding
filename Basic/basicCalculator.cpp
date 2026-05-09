#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    char op;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter Operator: ";
    cin>>op;

    if(op == '+'){
        cout<<"a+b = "<<(a+b) <<endl;
    }else if (op == '-'){
        cout<<"a-b = "<<(a-b) <<endl;
    }else if (op == '*'){
        cout<<"a*b = "<<(a*b) <<endl;
    }else if (op == '/'){
        cout<<"a/b = "<<(a/b) <<endl;
    }else{
        cout<<"Invalid Operator"<<endl;
    }
    
    return 0;
}