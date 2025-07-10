#include<bits/stdc++.h>
using namespace std;

string LargestOddno(string nums){
    int n=nums.size();
    for(int i=nums.size()-1;i>=0;i--){
        if((nums[i]-'0') % 2 !=0){
            return nums.substr(0,i+1);
        }
    }
    return "";

}

int main(){
    string nums="12354";
    
    string result = LargestOddno(nums);
    cout << result << endl;
    return 0;
}