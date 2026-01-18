#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int i = m - 1;
        int j = n - 1;
        int p = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[p] = nums1[i];
                i--;
            }
            else
            {
                nums1[p] = nums2[j];
                j--;
            }
            p--;
        }

        while (j >= 0)
        {
            nums1[p] = nums2[j];
            j--;
            p--;
        }
    }
};

void printVector(const vector<int> &vec)
{
    cout << "[";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
        if (i < vec.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;
}

int main()
{
    Solution solver;

    vector<int> nums1_a = {1, 2, 3, 0, 0, 0};
    vector<int> nums2_a = {2, 5, 6};
    int m1 = 3, n1 = 3;

    cout << "Test Case 1 Before: ";
    printVector(nums1_a);
    solver.merge(nums1_a, m1, nums2_a, n1);
    cout << "Test Case 1 After:  ";
    printVector(nums1_a);

    vector<int> nums1_b = {1};
    vector<int> nums2_b = {};
    int m2 = 1, n2 = 0;

    cout << "Test Case 2 Before: ";
    printVector(nums1_b);
    solver.merge(nums1_b, m2, nums2_b, n2);
    cout << "Test Case 2 After:  ";
    printVector(nums1_b);

    vector<int> nums1_c = {0};
    vector<int> nums2_c = {1};
    int m3 = 0, n3 = 1;

    cout << "Test Case 3 Before: ";
    printVector(nums1_c);
    solver.merge(nums1_c, m3, nums2_c, n3);
    cout << "Test Case 3 After:  ";
    printVector(nums1_c);

    return 0;
}