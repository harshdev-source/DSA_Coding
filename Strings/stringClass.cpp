#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    cout<<str<<endl;
    cout<<str[4]<<endl;

    // string str2;
    // cin>>str2;
    // getline(cin, str2, '%');
    // cout<<str2<<endl;



    string str3 = "Apna college";
    for(int i=0; i<str3.length(); i++){ //Dot function (.) to access memeber function of class
        cout << str3[i] << "-";
    } 
    cout<<endl;

    for( char ch: str3){
	cout<<ch<<",";
    }
    cout<<endl;

// ---------------------------------------------------String Member Functions---------------------------------------------------

    string str4 = "AZAD Aparajita Azad";
    cout << str4.length() << endl;
    cout << str4.at(4) << endl;
    cout << str4.substr(0, 10) << endl;
    cout << str4.find("Azad",5) << endl;




    return 0;
}