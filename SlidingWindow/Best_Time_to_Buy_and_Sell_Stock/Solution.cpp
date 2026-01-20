#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int price : prices) {
            if (price < min_price) {
                min_price = price;
            }
            
            int current_profit = price - min_price;
            
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
        }
        return max_profit;
    }
};

int main() {
    Solution solver;

    
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test Case 1: " << solver.maxProfit(prices1) << " (Expected: 5)" << endl;

   
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test Case 2: " << solver.maxProfit(prices2) << " (Expected: 0)" << endl;


    vector<int> prices3 = {2, 4, 1, 10};
    cout << "Test Case 3: " << solver.maxProfit(prices3) << " (Expected: 9)" << endl;

    return 0;
}