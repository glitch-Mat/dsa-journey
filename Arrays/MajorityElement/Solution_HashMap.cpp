#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int count = 0;
        int num = 0;

        for(int i : nums){
            map[i]++;
            if(map[i] > count){
                count = map[i];
                num = i;
            }
        }
        return num;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution solver;
    int result = solver.majorityElement(nums);
    
    cout << result << endl;
    
    return 0;
}