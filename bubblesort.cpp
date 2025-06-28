#include<iostream>
#include<vector>
using namespace std;



void bubblesort(vector<int>&arr){
    int n = arr.size(); 

    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-1;j++){

            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main(){
    vector<int>arr={6, 1, 4, 2, 8};
    bubblesort(arr);
    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    return 0;
}
