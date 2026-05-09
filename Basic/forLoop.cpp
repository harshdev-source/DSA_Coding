#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        count = count+i;
   }
   cout<<count<<endl;
    
    return 0;
}