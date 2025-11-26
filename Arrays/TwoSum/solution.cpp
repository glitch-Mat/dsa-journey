
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> seen;
        int size = nums.size();
        int p;

        for (int i = 0; i < size; i++)
        {
            p = target - nums[i];
            if (seen.count(p))
            {
                return {seen[p], i};
            }
            else
            {
                seen[(nums[i])] = i;
            }
        }
        return {};
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    int target, element, count;

    cout << "Enter the number of elements for the array (vector): ";
    cin >> count;
    if (count <= 1)
    {
        cout << "Error: Array must contain at least 2 elements." << endl;
        return 1;
    }

    cout << "Enter the " << count << " elements, separated by spaces: ";
    for (int i = 0; i < count; ++i)
    {
        if (cin >> element)
        {
            nums.push_back(element);
        }
        else
        {
            cout << "Error reading input. Exiting." << endl;
            return 1;
        }
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = s.twoSum(nums, target);

    cout << "\n--- Result ---" << endl;
    if (!result.empty())
    {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Elements: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << endl;
    }
    else
    {
        cout << "No solution found for the target sum." << endl;
    }

    return 0;
}