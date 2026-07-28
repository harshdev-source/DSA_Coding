#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch1 = 'a';
    char ch3 = '%';
    char ch4 = '3';
    char ch5 = '\n';  //next line character -> \n
    cout << int(ch1) << endl; 



    // Character Array
    char str[] = {'a','b','c','d', 'e', '\0'};
    char str2[] = "harsh";
    cout << "Name:" << str2 << endl;



    // Input & Output in Character array
    // char input[10];
    // cout<<"Enter your word: ";
    // cin >> input;  // Cin ignores word after whitespace

    // cout<<"Your word was: " << input << endl;
    // cout << "Length of your word is: " << strlen(input) << endl;

    
    
    // ----------------------------------------------------------------------------------------------------------------
    // Taking input using getlien function


    char sentence[50];
    cout<<"\nEnter your sentence: ";
    cin.getline(sentence, 50);

    cout<<"Your sentence was: " << sentence << endl;
    cout << "Length of your sentence is: " << strlen(sentence) <<endl;

    return 0;
}