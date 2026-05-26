#include<iostream>
using namespace std;

void printArr(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;

}


int main(){
    // int a = 5;
    // int *ptr = &a; 
    // cout << ptr << endl;
 
    int arr[] = {1,2,3,4,5};   
    int n = sizeof(arr) / sizeof(int);
    
    
    printArr(arr,n);
    
    return 0;
}



// cout << *(arr) <<endl;  //arr[0 ]  both these are same
// cout << *(arr+1) <<endl; //arr[1]  both these are same
// cout << *(arr+2) <<endl; //arr[2]  both these are same