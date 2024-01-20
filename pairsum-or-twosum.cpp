#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string issum(vector<int> p, int n, int t)
{

    int lft = 0;
    int rgt = n - 1;
    sort(p.begin(), p.end());
    int sum;
    while (lft < rgt)
    {
        sum = p[lft] + p[rgt];
        if (sum == t)
        {
            cout << "(" << lft << "," << rgt << ")" << endl;
            cout<<"\n"<<p[lft]+p[rgt]<<endl;
            return "yes";
        }
        else if (sum < t)
        {
            lft++;
        }
        else
        {
            rgt--;
        }
    }

    return "no";
}

int main()
{

    vector<int> v = {3, 4, 6, 7, 5, 8};
    int n = 6;
    int t = 9;
    cout << issum(v, n, t);
    // if(issum(v,n,t)){
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no"; 
    // }
    return 0;
}