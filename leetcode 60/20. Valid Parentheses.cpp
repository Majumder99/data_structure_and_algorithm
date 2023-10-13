#include <stack>
#include <string>

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else if (c == ')' || c == '}' || c == ']')
            {
                if (st.empty())
                {
                    return false; // Closing bracket with no corresponding opening bracket
                }
                char top = st.top();
                if ((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false; // Mismatched brackets
                }
            }
        }

        return st.empty(); // If the stack is empty, all brackets were properly matched.
    }
};
