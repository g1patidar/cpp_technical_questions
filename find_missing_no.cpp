#include<iostream>
using namespace std;
#include<vector>
int main(){

    // First approch 
    // hare & tortoise problem

    vector<int> a{11,12,13,15,17,18};
    int i=0;
    int s=a.size();
    for(auto k:a){
        if(k+1!=a[i+1] and s-1!=i){
            cout<<k+1;
            cout<<endl;
        }
        i++;
    }   

    // by another style use for loop
    // for(int i=0; i<a.size(); ++i){
    //     if(a[i+1]!= a[i]+1 and i!=a.size()-1){
    //         cout<<a[i]+1<<"\t";
    //     }
    // }
     return 0;

    // Second Approch
    
}