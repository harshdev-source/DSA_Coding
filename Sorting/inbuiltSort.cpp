#include<iostream>
#include <algorithm>
using namespace std;

void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
        
	int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    // int n = sizeof(arr)/sizeof(int);

    // Ascending sorting
    sort(arr, arr+8);
    // sort(arr+2, arr+5); //Selective Sorting
    print(arr, 8);
    cout<<endl;

    // Descending Sorting
    sort(arr,arr+8,greater<int>());
    print(arr,8);

    return 0;
}