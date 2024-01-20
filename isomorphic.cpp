#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
bool isIsomorphic(string s, string t) {
        unordered_map<char, char> l1;
        unordered_map<char, char> l2;
        for (int i = 0;i<s.size();++i) {
           if ( !l1.contains(s[i]) && !l2.contains(t[i]) ) {
               l1[s[i]] = t[i];
               l2[t[i]] = s[i];
           } else if (l1[s[i]] != t[i] || l2[t[i]] != s[i]) {
               return false;
           }
        }
        return true;
    }
int main(){
    isIsomorphic("egg", "adkd");

    return 0;
}