#include<iostream>
using namespace std;
#include<map>
int main(){
    
    int n;
    string s;
    map<string, int> mp;
    cout<<"how many records \n";
    cin>>n;

    for(int i=0; i<n; ++i){
        cin>>s;
        mp[s]++;
    }

    for(auto p:mp){
        cout<<p.first<<"\t"<<p.second<<endl;
    }
    return 0;
}