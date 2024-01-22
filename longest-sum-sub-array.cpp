// find out the longest size of sub array but window is not given ?

#include <iostream>
using namespace std;
#include <vector>
/*
sum=0;
mx = arr[0];

*/
int main()
{
    // vector<int> v{-10,5,-1,15,3};
    vector<int> v{3,4,-1,2,5};

    int sum = 0, mx;
    mx = v[0];
    for (int i = 0; i < v.size(); ++i)
    {
        sum = sum + v[i];
        mx = max(mx, sum);
        if (sum < 0)
        {
            sum = 0;
        }            
    }
    cout<<"max sum of sub array :"<<mx;

    return 0;
}