#include<iostream>
#include<string>
using namespace std;


class Print{
public:
    //-------------------------------------------------------- Function overloading --------------------------------------------------------
    void show(int x){
        cout << "int: " << x <<endl;
    }

    
    void show(string x){
        cout << "String: " << x <<endl;
    }
};


class Complex{
    int real;
    int img;

public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout << real << "+" << img << "i \n";
    }

    // -------------------------------------------------------- Operator Overloading --------------------------------------------------------
    Complex operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img; 
        Complex c3(resReal, resImg);
        return c3;
    }
    
    Complex operator - (Complex &c2){
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img; 
        Complex c3(resReal, resImg);
        return c3;
    }
};


class Parent{
public:
    void show(){
        cout << "Parent class show.. \n";
    }


// -------------------------------------------------------- Virtual Function--------------------------------------------------------
    virtual void hello(){
        cout << "Parent hello \n";
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "Child Class Show.. \n";
    }
    
    void hello(){
        cout << "Child hello \n";
    }
};




int main(){
    
    Print obj1;
    obj1.show("Harsh");
    obj1.show(35);



    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2;
    c3.showNum();

    Complex c4 = c1 - c2;
    c4.showNum();


    // --------------------------------------------------------Function Overriding--------------------------------------------------------
    Child child1;
    child1.show();

    Parent *ptr;
    ptr = &child1;  // Runtime binding of child object with parent class
    ptr->hello();  // virtual function

    return 0;
}