#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int m = s.length();
        int n = t.length();
        int j = 0;
        if (m == 0)
        {
            return true;
        }

        for (int i = 0; i < n; i++)
        {

            if (s[j] == t[i])
            {
                j++;
            }

            if (j == m)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    Solution solver;

    string s1 = "abc";
    string t1 = "ahbgdc";
    cout << "Test Case 1 (s=\"" << s1 << "\", t=\"" << t1 << "\"): "
         << (solver.isSubsequence(s1, t1) ? "True" : "False")
         << " (Expected: True)" << endl;

    string s2 = "axc";
    string t2 = "ahbgdc";
    cout << "Test Case 2 (s=\"" << s2 << "\", t=\"" << t2 << "\"): "
         << (solver.isSubsequence(s2, t2) ? "True" : "False")
         << " (Expected: False)" << endl;

    string s3 = "";
    string t3 = "ahbgdc";
    cout << "Test Case 3 (s=\"" << s3 << "\", t=\"" << t3 << "\"): "
         << (solver.isSubsequence(s3, t3) ? "True" : "False")
         << " (Expected: True)" << endl;

    return 0;
}