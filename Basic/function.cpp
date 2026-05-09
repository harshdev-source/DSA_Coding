#include<iostream>
using namespace std;

// -----------------------------NO RETURN FUNCTION-----------------------------
// void sayHello(){
//     cout<<"Hello World"<<endl;
// }


// -----------------------------SYNTAX WITH PARAMETER-----------------------------
int sum(int a, int b){
    int sum = a+b;
    return sum;
}

// -----------------------------SYNTAX WITH PARAMETER + DEFAULT PARAMETER-----------------------------
int diff(int a, int b=1){
    int diff = a-b;
    return diff;
}

// ----------------------------- Factorial-----------------------------
int fact(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b *= i;
    }
    return b;
}

// -----------------------------Binomial Coefficient-----------------------------
int binomial(int n, int r){
    int val = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);
    
    int result = val / (val2 * val3);

    return result;
}

// -----------------------------FUNCTION OVERLOADING-----------------------------
int divide(int a, int b){
    return a/b;
}

double divide(double a, double b){
    return a/b;
}


// -----------------------------Check Palindrome-----------------------------
int revCheck(int n){
    int rev = 0;
    while(n>0){
        int lastDigit = n%10;
        rev = rev *10 + lastDigit;
        n = n/10;
    }    
    return rev;
}

bool palindrome(int num){
    int rev = revCheck(num);
    
    return num == rev;
}

// -----------------------------Digit sum-----------------------------
int digitSum(int n){
    int digi = 0;
    while(n>0){
        int lastDigit = n%10;
        digi = digi + lastDigit;
        n = n/10;
    }    
    return digi;
}







int main(){
    
    // sayHello();
    
    cout<< sum(5,6) <<endl;
    
    cout<< diff(5) <<endl;

    cout<<fact(7)<<endl;

    cout<<binomial(4 , 2)<<endl;

    cout<<divide(6.5,5.6)<<endl;

    cout<<divide(4,2)<<endl;



    int num = 124;

    if(palindrome(num)){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }


    cout<<digitSum(123)<<endl;


    return 0;
}