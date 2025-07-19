#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=arr[j];
            }
            
        }
                int temp =arr[minIndex];
                arr[minIndex]=arr[i];
                arr[i]=temp;

    }
}

int main(){
    vector<int>arr={5, 3, 6, 2, 1};
    selectionsort(arr);
    cout<<"sorted array";
    for(int nums:arr){
        cout<<nums<<"";
    }
    return 0;
}