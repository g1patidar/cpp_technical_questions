#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int> arr{1,1,2,1,3,4,2,5,6};
    vector<int > duplicarr;
    sort(arr.begin(),arr.end());
    int l;
    int k=0;
    for(int i=0; i<arr.size() ;++i){
        
        if(arr[i]!=arr[i+1]){
            duplicarr[k]=arr[i];
            k++;
        }
    }
    for(auto t:duplicarr){
        cout<<t<<"\t";
    }
    
    

    
    return 0;
}