// second largest no. in array 
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int> arr{4,5,7,3,777,444,36,75,33,78,32};

    //sir approach

    sort(arr.begin(), arr.end());
    auto it = arr.end();
    cout<<"second :"<< *(it-2);


    // my approach
    
    // int pre;
    // int mxx=arr[0];
    // for(int i=0; i<arr.size(); ++i){

    //     if(mxx<arr[i]){
    //         pre=mxx;   
    //         mxx=arr[i];
    //     }
    //     if(pre<arr[i]&&mxx>arr[i]){
    //         pre=arr[i];
    //     }
    // }
    // cout<<pre;

    return 0;
}