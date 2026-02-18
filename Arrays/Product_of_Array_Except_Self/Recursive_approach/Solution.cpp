#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        recc(nums, 0, 1, result);
        return result;
    }

    int recc(vector<int>& nums, int i, int left, vector<int>& result) {
        if (i >= nums.size()) {
            return 1;
        }

        int right = recc(nums, i + 1, left * nums[i], result);
        result[i] = left * right;
        return nums[i] * right;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution solver;
    vector<int> result = solver.productExceptSelf(nums);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i < result.size() - 1 ? "," : "");
    }
    cout << "]" << endl;

    return 0;
}