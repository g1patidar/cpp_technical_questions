#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main()
{
    vector<int> arr{1, 3, 5, 6, 4, 3, 4, 6, 5};
    vector<int> arr2;
    
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); ++i){
        if(arr[i]!=arr[i+1]){
            arr2.push_back(arr[i]);
            
        }
    }
    cout<<endl;

    for(auto l:arr2){
        cout<<l<<"\t";
    }
    cout<<endl;
    cout<<"lenght of the array is  :"<<arr2.size();

    return 0;
}