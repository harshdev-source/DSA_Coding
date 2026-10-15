#include<iostream>
#include<string>
using namespace std;

// ----------------------------------------------------------------------- Static Keyword -----------------------------------------------------------------------
void counter(){
    int static count = 0;
    count++;
    cout << "Count : " << count << endl;
} 

class Example{
public:
    int static x;
};

// we should initialize outside of the class

int Example::x = 0;



// ----------------------------------------------------------------------- Static Object -----------------------------------------------------------------------

class Example2{
public:
    Example2(){
        cout << "Constructor Started...." << endl;
    }


    ~Example2(){
        cout << "Destructor Started...." << endl;
    }
};

// ----------------------------------------------------------------------- Pure Virtual Function -----------------------------------------------------------------------

class Shape{
public:
    virtual void draw() = 0;  // Pure virtual function, Abstract Function        
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Draw Circle\n";
    }
};

class Square : public Shape{
public:
    void draw(){
        cout << "Draw Square\n";
    }
};

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
    
    // ----------------------------------Abstraction objects----------------------------------
    Circle cir1;
    cir1.draw();

    Square sqr1;
    sqr1.draw();

    // ---------------------------------- Static function called ------------------------------
    counter();
    counter();
    counter();

    // ---------------------------------- Static object from Example class -----------------------
    Example eg1;
    Example eg2;
    Example eg3;
    cout << eg1.x++ << endl;
    cout << eg2.x++ << endl;
    cout << eg3.x++ << endl;


    // ---------------------------------- Static Object ----------------------------------
    int a = 0;
    if(a==0){
        static Example2 eg1;
    }

    cout << "Code ending..\n";

    return 0;
}