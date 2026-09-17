#include<iostream>
using namespace std;

class Student{
    string name;
public:
    // Properties
    float cgpa;

    // Methods
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }
};


class user{
    // Properties
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout << "Deleting Account \n";
    }

    void editBio(string newBio){
        bio = newBio;
        cout << "Bio Edited \n";
    }
};


int main(){
    Student s1; // Object

    s1.cgpa = 9.3;

    cout << s1.cgpa << endl;
    s1.getPercentage();

    return 0;
}