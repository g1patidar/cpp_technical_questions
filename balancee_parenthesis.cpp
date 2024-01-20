#include <iostream>
using namespace std;
#include <stack>
bool isvalid(string s)
{
    stack<char> stck;
    bool ans = true;
    int n = s.size();

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '{' or s[i] == '[' or s[i] == '(')
            {
                stck.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (s[i] != stck.empty() and stck.top() == '(')
                {
                    stck.pop();
                }
                else
                {
                    ans = false;
                    break;
                }
            }
            else if (s[i] == '}')
            {
                if (s[i] != stck.empty() and stck.top() == '{')
                {
                    stck.pop();
                }
                else
                {
                    ans = false;
                    break;
                }
            }

            else if (s[i] == ']')
            {
                if (s[i] != stck.empty() and stck.top() == '[')
                {
                    stck.pop();
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        return ans;
    }
    ans= false;
    return ans;
}
int main()
{
    string s = "{[()]}";

    if (isvalid(s))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "not balanced";
    }

    return 0;
}