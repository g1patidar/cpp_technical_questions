#include<iostream>
using namespace std;
#include<unordered_map>

bool checkanagram(string &str1, string &str2){
    if(str1.size()!= str2.size())
    return false;

    unordered_map<char , int> unmp;

    for(int i=0; i<str1.size(); ++i){
        unmp[str1[i]]++;
    }
    for(int i=0; i<str1.size(); i++){
        if(unmp.find(str2[i]) != unmp.end()){
            unmp[str1[i]]--;
        }
        else
        return false;
    }
    for(auto k:unmp){
        if(k.second !=0){
            return false;
        }
    }

    return true;

}
int main(){
    string str1, str2;
    cout<<"enter two string :";
    cin>>str1>>str2;
    bool r= checkanagram(str1, str2);
    if(r){
        cout<<"anagram ";
    }
    else
    cout<<"not anagram !";
    return 0;
}