// #include<iostream>
// using namespace std;

// int main(){
//     int age;

//     cout<<"Enter your age:- ";
//     cin>>age;

//     if (age>=18){
//         cout<<"Adult"<<endl;
//     }else{
//         cout<<"Underage"<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"Enter age: "<<endl;
    cin >> age;
    bool isAdult = (age >= 18) ? "Adult" : "Not Adult";
    
    return 0;
}