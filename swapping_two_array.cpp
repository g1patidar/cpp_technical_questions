#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int > a{2,4,6,3};
    vector<int > a1{24,22,68,34,75};

    swap(a,a1);
    for(auto k:a){
        cout<<k<<"\t";
    }
    cout<<endl;
    for(auto k:a1){
        cout<<k<<"\t";
    }
    cout<<endl;

    
    return 0;
}