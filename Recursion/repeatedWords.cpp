#include<iostream>
#include<vector>
#include<string>
using namespace std;

void removeDup(string s, string ans, int i, int map[26]){

    int mapIdx = (int)(s[i] - 'a'); // 'a' -> 0; 'b'-> 1


    if(i==s.size()){
        cout << ans << endl;
        return;
    }


    if(map[mapIdx] == true){// Duplicate
        removeDup(s, ans, i+1, map);
    }
    
    else{ // Not duplicate
        map[mapIdx] = true;
        removeDup(s, ans + s[i], i+1, map);
    }

}

int main(){
    string str = "apnacollege";
    string ans = "";
    // vector<int> map(26,false);    Vector method of doing the array thing
    int map[26] = {false};

    removeDup(str, ans, 0, map);
 
    return 0;
}