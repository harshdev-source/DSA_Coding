#include<iostream>
using namespace std;

void func(int mat[][4], int n, int m){
    cout << "0th row ptr " << mat << endl;
    cout << "1st row ptr " << mat+1 << endl;
    cout << "2ns row ptr " << mat+2 << endl;

    cout << "0th row ptr " << *mat << endl;
    cout << "1st row ptr " << *(mat+1) << endl;
    cout << "2ns row ptr " << *(mat+2) << endl;

    cout << *(*(mat + 2) + 2) << endl;
}

int main(){
    int mat [4] [4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    func(mat, 4, 4);

    // cout << mat << " = "<<&mat[0][0] << endl;
    // cout << mat+1 << " != "<< &mat[0][1] << endl;
    // cout << mat+1 << " = "<< &mat[1][0] << endl;


    return 0;
}