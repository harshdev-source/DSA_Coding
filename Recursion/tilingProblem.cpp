#include<iostream>
#include<vector>
#include<string>
using namespace std;

int tp(int n){ // 2Xn
    // Base case
    if(n == 0 || n == 1){
        return 1;
    }


    // Vertial choice
    int ans1 = tp(n-1); //2Xn-1

    // Horizontal choice
    int ans2 = tp(n-2);//2Xn-2

    return ans1 + ans2;

}
 

int main(){
    
    int n = 5;

    cout<<tp(n)<<endl;

    return 0;
}