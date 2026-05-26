#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5, 4, 3, 9, 2};
    int max = arr[0];

    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<=n; i++){

        if(max < arr[i]){
            max = arr[i];
        }
        else{
            continue;
        }
    }
    
    cout << max <<"\n";

    return 0;
}