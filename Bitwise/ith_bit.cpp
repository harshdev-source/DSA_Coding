#include<iostream>
using namespace std;

int getIthBit(int num, int i){
    int bitMask = 1 << i;

    if(!(num & bitMask)){
        return 0;
    }else{
        return 1;
    }
}

int setIthBit(int num, int i){
    int bitMask = 1 << i;
    return (num | bitMask);
}


int clearBit(int num, int i){
    int bitMask = ~(1 << i);
    return num & bitMask;
}


bool isPowerof2(int num){
    if(!(num & (num-1))){
        return true;
    }else{
        return false;
    }
}


int main(){
    
    cout << getIthBit(6,2) << endl;
    
    cout << setIthBit(6, 3) << endl;

    cout << clearBit(6, 1) << endl;


    cout << isPowerof2(4) << endl;
    cout << isPowerof2(16) << endl;
    cout << isPowerof2(32) << endl;
    cout << isPowerof2(14) << endl;
    cout << isPowerof2(9) << endl;


    return 0;
}