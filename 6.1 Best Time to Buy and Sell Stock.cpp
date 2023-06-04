#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxProfit = 0, n = prices.size();
    int buy = prices[0];
    for(int i=1; i<n; i++) {
        if(prices[i] < buy) {
            buy = prices[i];
        }
        else if(prices[i] - buy > maxProfit) {
            maxProfit = prices[i] - buy;
        }
    }
    return maxProfit;
}
