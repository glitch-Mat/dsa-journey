#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        vector<int> freq(26, 0);

        int len = s.length();

        for (int i = 0; i < len; i++)
        {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < len; i++)
        {
            freq[t[i] - 'a']--;
        }

        for (int count : freq)
        {
            if (count != 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution solver;

    string s1 = "anagram";
    string t1 = "nagaram";
    cout << "Test Case 1 (" << s1 << ", " << t1 << "): "
         << (solver.isAnagram(s1, t1) ? "True" : "False")
         << " (Expected: True)" << endl;

    string s2 = "rat";
    string t2 = "car";
    cout << "Test Case 2 (" << s2 << ", " << t2 << "): "
         << (solver.isAnagram(s2, t2) ? "True" : "False")
         << " (Expected: False)" << endl;

    string s3 = "a";
    string t3 = "ab";
    cout << "Test Case 3 (" << s3 << ", " << t3 << "): "
         << (solver.isAnagram(s3, t3) ? "True" : "False")
         << " (Expected: False)" << endl;

    return 0;
}