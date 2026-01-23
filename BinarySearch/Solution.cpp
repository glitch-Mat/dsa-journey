#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }

            if (target < nums[mid])
            {

                right = mid - 1;
            }
            else
            {

                left = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution solver;

    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    cout << "Test 1 (Find 9): " << solver.search(nums1, target1) << " (Expected: 4)" << endl;

    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    cout << "Test 2 (Find 2): " << solver.search(nums2, target2) << " (Expected: -1)" << endl;

    vector<int> nums3 = {5};
    int target3 = 5;
    cout << "Test 3 (Find 5): " << solver.search(nums3, target3) << " (Expected: 0)" << endl;

    return 0;
}