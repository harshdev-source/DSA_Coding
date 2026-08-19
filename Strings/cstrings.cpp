#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100] = "Hello ";
    char str3[100] = "world";

    strcpy(str1, "Harsh Verma");

    cout<< strcat(str2, str3) <<endl;
    cout << str2 <<endl;

    cout << str1 << "\n";



    char str4[100] = "abc";
    char str5[100] = "abc";

    cout << strcmp(str4,str5) <<endl;


    return 0;
}