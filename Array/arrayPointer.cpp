#include<iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i=0; i<n; i++){
        cout << *ptr+i << endl;
        // ptr++;
    }
}



int main(){
    int x = 0;
    int *ptr = &x;
    
    int y = 25;
    ptr = &y;

    cout << *ptr <<endl;


    int arr[5];
    cout << arr <<"\n";
    // arr = &y;
    
    //--------------------------------------------------------------Pointer Arithmetic--------------------------------------------------------------
    int a = 10;
    int *ptr2 = &a;
    
    cout << ptr2 << "\n";
    ptr2++;
    cout << ptr2+3 << "\n";
    
    //----------------------------------------------------------Traversing Arr using pointer---------------------------------------------------------
    
    
    
    int arr2[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr2)/sizeof(int);
    printArr(arr2,n);

    //----------------------------------------------------------Addition and Subtraction----------------------------------------------------------
    int r = 5;
    int *ptr3 = &r;
    int *ptr4 = ptr1 + 3;

    cout << ptr3 <<endl;
    cout << ptr4 <<endl;

    cout << ptr4 - ptr3 << endl;

    return 0;
}