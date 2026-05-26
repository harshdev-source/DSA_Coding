#include<iostream>
using namespace std;

// ------------------------------------------With EXTRA SPACES------------------------------------------

void showArr(int *arr, int a){
    for(int i=0; i<a; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n= sizeof(arr) / sizeof(int); 
    // int copyArr[n];


    // for(int i=0; i<n; i++){
    //     int j= n-i-1;
    //     copyArr[i] = arr[j];
    // }

    // for(int i=0; i<n; i++){
    //     arr[i] = copyArr[i];
    // }

    // showArr(arr,n);

// ------------------------------------------Without Extra Spaces------------------------------------------

    int start = 0, end = n-1;

    while(start < end){
        // SWAP
        int c= arr[start];
        arr[start]=arr[end];
        arr[end]=c;

        start++;
        end--;
    }

    showArr(arr,n);
    return 0;
}