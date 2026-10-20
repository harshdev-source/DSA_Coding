// WAP to find last occurence of an element in a vector

#include<iostream>
#include<vector>
using namespace std;

int lastOccur(vector<int>& nums,int target, int i){
    if(i == nums.size()){
        return -1;
    }

    int idx = lastOccur(nums,target, i+1);

    if(idx == -1){
        if(nums[i] == target){
            return i;
        }
    }

    return idx;
}

int main(){
    vector<int> num = {1, 2, 3, 4, 4, 5, 6, 6, 6, 7, 8};

    cout<<lastOccur(num, 6, 0)<<endl;

    return 0;
}