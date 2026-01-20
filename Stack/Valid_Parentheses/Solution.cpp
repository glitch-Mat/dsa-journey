#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '}')
            {
                if (st.empty() || st.top() != '{')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }

            else if (c == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }

            else if (c == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }

            else
            {
                st.push(c);
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution solver;

    vector<string> testCases = {
        "()",
        "()[]{}",
        "(]",
        "([)]",
        "{[]}"};

    for (const string &s : testCases)
    {
        cout << "Input: \"" << s << "\" | Valid: "
             << (solver.isValid(s) ? "true" : "false") << endl;
    }

    return 0;
}