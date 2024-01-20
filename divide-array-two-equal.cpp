#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool div(vector <int> &p)
{

    int sum = 0;

    for (int i = 0; i < p.size(); ++i)
    {
        sum += p[i];
    }

    int pre = 0;

    for (int i = 0; i < p.size(); ++i)
    {

        pre += p[i];
        int ans = sum - pre;
        if (ans == pre)
        {
            cout<<"the index of divided point :"<<i<<endl;
            return 1;
        }
    }
    return 0;
}
int main()
{

    vector<int> p{4, 3, -2, 5, 8, 20, -10, 8};
    cout << div(p);
    return 0;
}