// WAP to find first occurence of an element in a vector

#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int>& nums,int target, int i){
    if(nums[i]==target){
        return i;
    }

    if(i>=nums.size()){
        return -1;
    }

    return firstOccur(nums,target, i+1);
}

int main(){
    vector<int> num = {1, 2, 3, 4, 4, 5, 6, 7, 8};

    cout<<firstOccur(num, 4, 0)<<endl;

    return 0;
}