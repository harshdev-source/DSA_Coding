#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;
    
    Car(string name, string color){
        this->name=name;
        this->color=color;
        mileage = new int;  //Dynamic allocation
        *mileage = 12;
    }

    Car(Car &original){
        cout << "Copying original to new.. \n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;

    }
};



int main(){
    Car c1("Maruti 800", "White");
    
    Car c2(c1); // Custom copy constructor
 
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    
    *c2.mileage = 18;
    cout << *c2.mileage << endl;

    
    cout << *c1.mileage << endl;
    
    return 0;
}