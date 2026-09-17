#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
    
    Car(string name, string color){
        this->name=name;
        this->color=color;
    }

    Car(Car &original){
        cout << "Copying original to new.. \n";
        name = original.name;
        color = original.color;
    }
};



int main(){
    Car c1("Maruti 800", "White");
    
    Car c2(c1); // Custom copy constructor
    cout << c2.name << endl;
    cout << c2.color << endl;
    
    return 0;
}