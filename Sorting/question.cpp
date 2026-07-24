// Sort this array of character using insertion sort in descending order

#include<iostream>
using namespace std;

void print(char ch[],int n){
    for(int i=0; i<n; i++){
        cout << ch[i] << " ";
    }
}

void sortCh(char ch[],int n){

    for(int i=1; i<n; i++){
        int curr = ch[i];
        int prev = i-1;

        while(prev>=0 &&  ch[prev]<curr){
            swap(ch[prev], ch[prev+1]);
            prev--;
        }

        ch[prev+1] = curr;
    }

    print(ch,n);
}

int main(){
    char ch[] = {'f','b','a','e','c','d'};
    int n = sizeof(ch)/sizeof(char);

    sortCh(ch,n);
    return 0;
}