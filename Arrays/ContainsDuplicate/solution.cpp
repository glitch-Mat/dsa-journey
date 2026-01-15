#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;

        for (int num : nums)
        {

            if (seen.count(num))
            {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};

int main()
{
    Solution solver;

    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test Case 1: " << (solver.containsDuplicate(nums1) ? "True" : "False") << " (Expected: True)" << endl;

    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test Case 2: " << (solver.containsDuplicate(nums2) ? "True" : "False") << " (Expected: False)" << endl;

    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << "Test Case 3: " << (solver.containsDuplicate(nums3) ? "True" : "False") << " (Expected: True)" << endl;

    return 0;
}