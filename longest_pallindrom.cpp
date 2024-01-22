#include <iostream>
#include <vector>
using namespace std;
int lgp(string s)
{
    vector<int> lwr(26, 0);
    vector<int> upr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            lwr[s[i] - 'a']++;
        }
        if (s[i] >= 'A')
        {
            upr[s[i] - 'A']++;
        }
    }
    int count = 0;
    bool odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (lwr[i] % 2 == 0)
        {
            count += lwr[i];
        }
        else
        {
            count += lwr[i] - 1;
            odd = 1;
        }
        if (upr[i] % 2 == 0)
        {
            count += upr[i];
        }
        else
        {
            count += upr[i] - 1;
            odd = 1;
        }
    }
    return count + odd;
}
int main()
{
    string s = "abbcda";
    cout << lgp(s);
}


/*
// solve by g1
#include <iostream>
#include<map>
using namespace std;
int lgp(string s)
{
    int count =0, odd=0;
    char k;
    map<char ,int> mp;
    for(int i=0; i<s.size();++i){
        mp[s[i]]++;
    }
    for(int i=0; i<s.size(); ++i){
        cout<<s[i]<<"=";
        cout<<mp[s[i]]<<"\t";
    }


    // for(int k=0; k<s.size();++k){
    //     if(mp[s[k]]%2==0){
    //         count += mp[s[k]];
    //     }
    //     else{
    //         count += mp[s[k]]-1;
    //         odd =1;
    //     }

    // }
    return count + odd;
}
int main()
{
    string s = "abbc";
    cout << lgp(s);
}*/