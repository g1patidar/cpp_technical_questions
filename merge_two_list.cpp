#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
int main(){
    list<int> l1{1,2,4,5};
    list<int> l2{1,7,5};
    l1.sort();
    l2.sort();
    l1.merge(l2);
    for(auto k:l1){
        cout<<k<<"\t";
    }
    
    
    return 0;
}