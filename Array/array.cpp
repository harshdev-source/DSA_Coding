#include<iostream>
using namespace std;

int main(){
    int marks[3] = {45,67,76};

    // ----------------------------------------------OUTPUT OF ARRAY----------------------------------------------
    int n = sizeof(marks)/ sizeof(int);
    cout << n << endl;

    for(int i = 0; i<n; i++){
        cout << marks[i] << " " << endl;
    }


    // ----------------------------------------------INPUT IN ARRAY------------------------------------------------

    int arr[5];
    int size = sizeof(arr) / sizeof(int);
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    } 
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}