#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if(n == 0) return 0;

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < n; i++) {
        if(prices[i] < minPrice) {
            minPrice = prices[i]; // better buy price found
        }
        else {
            int profit = prices[i] - minPrice; // sell at prices[i]
            if(profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
