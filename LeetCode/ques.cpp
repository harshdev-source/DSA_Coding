#include<iostream>
#include<vector>
using namespace std;

int sumOfSquares(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            sum += nums[i - 1] * nums[i - 1];
        }
    }

    return sum;
}


int main(){
    vector<int> nums = {1,2,3,4,5,6};

    cout << sumOfSquares(nums) << endl;

    return 0;
}