#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& prices) {
        int max_profit=0; int cur_profit=0;
        for(int i=0; i<prices.size(); i++){
            int buy_value = prices[i];
            for(int j=i+1; j<prices.size(); j++){
                cur_profit = prices[j] - buy_value > cur_profit? prices[j] - buy_value: cur_profit;
            }
            max_profit = max_profit>cur_profit?max_profit:cur_profit;
        }
        return max_profit;
    }

int main(int argc, char const *argv[])
{
    vector<int> prices = {7,6,5,4};
    cout<<maxProfit(prices);
    return 0;
}
