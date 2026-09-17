#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;
public:
    string username;

    User(int id){
        cout << "Constructor has been called" << endl;
        this->id = id;
    }

    void setPass(string password){
        this->password = password;
    }

    string getPass(){
        return password;
    }

};


int main(){
    User user1(101);

    user1.username = "Harsh_18196";
    user1.setPass("happpyharry");

    cout << "Username : " << user1.username << endl;
    cout << "Password : " << user1.getPass() << endl;

    return 0;
}