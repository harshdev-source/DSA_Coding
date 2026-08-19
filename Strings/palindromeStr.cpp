#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char s[], int n){
    int st = 0, end = n-1;
    while(st < end){
        if(s[st] != s[end]){
            cout<<"Not a valid Palindrome" << endl;
            return false;
        }
        st++;
        end--;
    }

    cout << "Valid Palindrome" << endl;
    return true;
}


int main(){
    char word[] = "racecar";
    isPalindrome(word,strlen(word));

    return 0;
}