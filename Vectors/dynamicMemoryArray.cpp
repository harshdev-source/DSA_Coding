#include<iostream>
using namespace std;

int* memoryLeak(){
    int *ptr = new int;
    *ptr = 1200;

    cout << "Ptr points to: " << *ptr << endl;

    return ptr;
}

void funcInt(){
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr;

    delete ptr;
}


void funcArr(){
    int size; 
    cin >> size; 
    int *ptr = new int [size]; 
    int x=1; 
    
    for(int i=0; i<size; i++) { 
        ptr[i] = x; 
        cout << ptr[i] << ""; 
        x++; 
    }
        cout << endl;

        delete [] ptr;

        return; 
}

int main(){
    // int arr[100] = {1, 2, 3, 4, 5, 6};  //Static memory Allocation
    
    // Dynamic Memory Allocation
    // int size;
    // cin >> size;
    // int *arr = new int[size];
    // int x= 1;
    // for(int i=0; i<size; i++){
    //     arr[i] = x;
    //     cout << arr[i] << " ";
    //     x++;
    // }
    // cout << endl;

// ------------------------------------------------------- Understanding heap and stack allocation-------------------------------------------------------

    funcInt();
    funcArr();


    int *x = memoryLeak();

    cout << *x << endl;


    return 0;
}