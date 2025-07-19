#include<iostream>
#include<vector>
using namespace std;

int findlargestelement(vector<int>&arr){
    int n = arr.size();
    int largest = arr[0];  // Initialize with first element
    
    for(int i = 1; i < n; i++){  // Start from index 1, use < instead of <=
        if(arr[i] > largest){    // Use arr[i] instead of a[i], find larger element
            largest = arr[i];
        }
    }
    return largest;  // Return the largest element
}

int main(){
    vector<int>arr = {1, 2, -9, 4, 5};
    cout << "Largest number: ";
    int result = findlargestelement(arr);  // Store the returned value
    cout << result << endl;
    return 0;
}