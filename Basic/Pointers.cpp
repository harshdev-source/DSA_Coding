#include<iostream>
using namespace std;
// ---------------------------------------------------PASS BY VALUE---------------------------------------------------
void changeA(int a){
    a = 20;
    cout << a << "\n";
}

// ---------------------------------------------------PASS BY REFERENCE Using POINTER--------------------------------------------------- 
void changB(int *ptr){
    *ptr = 60;  
    cout << *ptr <<endl;
}
// ---------------------------------------------------PASS BY REFERENCE Using Reference variables--------------------------------------------------- 

void changeG(int &f){
    f = 1672;  
    cout << f <<endl;
}












int main(){
    // ---------------------------------------------------POINTERS BASIC---------------------------------------------------
    int a = 10;
    int b = 69;
    int *ptr = &b;
    int **ptr1 = &ptr; //Pointer to pointer variable



    cout << ptr1 << "=" << &ptr<<endl;
    cout << &a << endl;
    cout << ptr << " = " << &b <<endl;
    cout << sizeof(ptr) << endl;

    //--------------------------------------------------- Dereference operator---------------------------------------------------
    int c = 50;
    int *pointer = &c;

    cout << *(pointer)<< endl; // Dereferencing the C pointer

    *pointer = 20;
    cout << *(pointer) << endl;
    cout << c << endl;
    
    //--------------------------------------------------- NULL POINTER---------------------------------------------------
    int *point = NULL;
    cout<<point<<endl;


    // --------------------------------ChangeA function Pass by value---------------------------------------------------------------------
    int d = 10;
    changeA(d);
    cout << d <<endl; 
    
    // ---------------------------------------------------ChangeB function Pass by reference using Pointers---------------------------------------------------
    int e = 50;
    changB(&e);

    cout<<e<<endl;
    // ---------------------------------------------------Reference Variable---------------------------------------------------
    int f = 7;
    int &neww = f;
    f = 46;

    cout << f << "\n";
    cout << neww << endl;


    int g = 89;
    changeG(g);
    cout << g << endl;


    return 0;
}