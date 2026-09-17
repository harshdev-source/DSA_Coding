#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:

    // Car(string nameVal, string colorVal){ // Parameterized Constructor
    //     cout << "Constructor is called. Object is created..\n";
    //     name = nameVal;
    //     color = colorVal;
    // }

    Car(){ // Non-Parameterized Constructor
        cout << "Constructor is called. Object is created..\n";
    }

    Car(string name, string color){ // This pointer
        cout << "Constructor is called. Object is created..\n";
        this->name = name;
        this->color = color;
    }


    void start(){
        cout << "Car has started.. \n";
    }

    void stop(){
        cout << "Car has stopped! \n";
    }

    string getName(){
        return name;
    }

    string getColorName(){
        return color;
    }
};

int main(){
    Car c1("Maruti 800", "Red");

    cout << c1.getName() << endl;
    cout << c1.getColorName() << endl;
    
    return 0;
}