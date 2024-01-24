// first approach
#include <iostream>
using namespace std;
#include <vector>

bool iso(string &s1, string &s2)
{

    int n1 = s1.length();
    int n2 = s2.length();
    int a1[256] = {0};
    int a2[256] = {0};
    if (n1 != n2)
    {
        return false;
    }
    for (int i = 0; i < n2; ++i)
    {
        if (!a1[s1[i]] and !a2[s2[i]])
        {
            a1[s1[i]] = s2[i];
            a2[s2[i]] = s1[i];
        }
        else if(a1[s1[i]]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main()
{

    string s1 = "all";
    string s2 = "egg";
    bool s = iso(s1, s2);
    if (s)
    {
        cout << "it is isomorphic !" << endl;
    }
    else
    {
        cout << "it is not isomorphic !" << endl;
    }
    return 0;
}




// second approach
// #include <iostream>
// using namespace std;
// #include <unordered_map>
// bool isIsomorphic(string s, string t)
// {
//     unordered_map<char, char> mp, mp2;
//     for (int i = 0; i < s.length(); ++i)
//     {
//         if (mp[s[i]] && mp[s[i]] != t[i])
//             return false;
//         if (mp2[t[i]] && mp2[t[i]] != s[i])
//             return false;
//         mp[s[i]] = t[i];
//         mp2[t[i]] = s[i];
//     }
//     return true;
// }

// int main()
// {

//     string s1 = "all";
//     string s2 = "egg";
//     cout << isIsomorphic(s1, s2);
//     return 0;
// }