// with vector
#include<iostream>
#include<vector>
#include<algorithm>
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


// with array 
// #include<iostream>
// using namespace std;
// #include <array>

// int main()
// {
//     array<int ,5> a{9,2,4,5,6};
//     array<int ,5> a1{9,8,7,66,5};
   
//     a.swap(a1);


//     for(auto k:a1){
//         cout<<k<<"\t";
//     }
// }