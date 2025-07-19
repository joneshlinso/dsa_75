#include<iostream>
#include<vector>
using namespace std;

int checkSorted(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return -1;
         }              
     }
     return 1;

 }
    


int main(){
    vector<int>nums={1,2,3,4,3};
   int result= checkSorted(nums);

   if(result==1){
    cout<<"array is sorted"<<endl;
   } 
   else{
    cout<<"not sorted"<<endl;
   }
   return 0;
}