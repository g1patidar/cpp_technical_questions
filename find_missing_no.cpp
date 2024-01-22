#include<iostream>
using namespace std;
#include<vector>
int main(){

    // First approch 
    vector<int> a{11,12,13,15,17,18};
    int i=0;
    int s=a.size();
    for(auto k:a){
        if(k+1!=a[i+1] and s-1!=i){
            cout<<k+1;
            cout<<endl;
        }
        i++;
    }    return 0;

    // Second Approch
    
}