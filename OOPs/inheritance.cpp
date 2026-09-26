#include<iostream>
#include<string>
using namespace std;

class animal{
public:
    string color;
    void eat(){
        cout << "eats\n";
    }

    void breathe(){
        cout << "breathes\n";
    }
};

class Fish : public animal{
public:
    int fins;

    void swim(){
        cout << "Swims\n";
        cout << fins <<endl;
    }
};


class Teacher{
public:
    int salary;
    string subject;
};

class student{
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public student{
public:
    string name; 
};



int main(){
    Fish f1;
    f1.fins = 3;
    f1.swim();


    TA ta1;
    ta1.name = "Harsh Verma";
    ta1.subject = "C++";
    ta1.cgpa = 9.2;

    cout << ta1.name << endl;
    cout << ta1.subject << endl;
    cout << ta1.cgpa << endl;

    return 0;
}