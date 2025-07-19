#include<iostream>
#include<vector>
using namespace std;

pair<int,int> TwoSum(vector<int>arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(int number=target-arr[i]);
    }
    return {-1, -1}; 
}


int main(){
    vector<int>arr={2,6,5,8,11};
    int target=14;

    pair<int, int> result = TwoSum(arr, target);

    if (result.first != -1) {
        cout << "✅ Success! Found at indices: " << result.first << " and " << result.second << endl;
        cout << "Values are: " << arr[result.first] << " + " << arr[result.second] << " = " << target << endl;
    } else {
        cout << "❌ No valid pair found." << endl;
    }

    return 0;
}