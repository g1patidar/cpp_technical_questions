// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {

//     vector<int> v{3, 5, 1, 7, 2, 4};
//     int k = 3, j = 0, s=0, mx=0, p = 0;

//     for (int i = 0; i < 3; ++i)
//     {
//         s = s + v[i];
//     }
//     mx = s;
//     j = k;

//     while (j < v.size())
//     {
//         s = s - v[p];
//         s = s + v[j];
//         mx=max(mx,s);     // for take maximum window of the array
//         // mx=min(mx,s);  // for take minimum window of the array
//         j++;
//         p++;
//     }
//     cout<<"max sum = "<<mx;

//     return 0;
// }

#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> a{4,6,8,9,7};

    int k=3, sum=0, mx=0, j;
    j=k;
    int p=0;

    for(int i=0; i<k; i++){
        sum+=a[i];
    }

    mx=sum;
    while(j<a.size()){
        sum= sum- a[p];
        sum= sum+ a[j];
        mx= max(mx, sum);
        j++;
        p++;
    }
    cout<<"max window size is :"<<mx;
    return 0;

}