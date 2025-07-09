#include <iostream>
#include <vector>
using namespace std;

void moore(vector<int> arr){
    int cnt = 0;
    int ele = -1;

    // Phase 1: Find candidate
    for(int num : arr){
        if(cnt == 0){
            ele = num;
            cnt = 1;
        }
        else if(num == ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    // Phase 2: Verify candidate
    cnt = 0;
    for(int num : arr){
        if(num == ele){
            cnt++;
        }
    }

    if(cnt > arr.size()/2){
        cout << "✅ Majority element is: " << ele << endl;
    }
    else{
        cout << "❌ No majority element found." << endl;
    }
}

int main(){
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    moore(arr);
    return 0;
}
