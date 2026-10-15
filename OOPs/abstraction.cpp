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
    int static const x = 0;

};


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

int main(){
    
    Circle cir1;
    cir1.draw();

    Square sqr1;
    sqr1.draw();

    counter();
    counter();
    counter();

    Example eg1;
    Example eg2;
    Example eg3;
    cout << eg1.x++ << endl;
    cout << eg2.x++ << endl;
    cout << eg3.x++ << endl;


    return 0;
}