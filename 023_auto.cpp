#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;

int main(void)
{
    auto x = 1.0;
    auto y = 10;

    cout << x << endl;
    cout << y << endl;
    vector<int> v;
    for(auto i = v.begin(); i != v.end(); i++ ) // auto 迭代器
    {
        cout << *i << endl;
    }
    return 0;

}