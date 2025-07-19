#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int maxsubarray(vector<int> &num){
    int currsum=0;
    int maxsum=INT_MIN;

    for(int val :num){
        currsum+=val;
        maxsum=max(currsum,maxsum);

        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main(){
    vector<int> num={1,-3,2,4,5,3};

    cout<<"maxsum="<<maxsubarray(num)<<endl;
    return 0;

}