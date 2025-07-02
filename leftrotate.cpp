#include<iostream>
#include<vector>
using namespace std;

void LeftRotate(vector<int>&arr){
    int n=arr.size();
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] =temp;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    
    cout << "Left rotate by one:" << endl;
    LeftRotate(arr); 

    for(int nums:arr){
    
    cout<<nums<<" ";}
    return 0;
}