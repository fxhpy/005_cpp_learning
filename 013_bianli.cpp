#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;

int main(void)
{
    vector<int> v;
    v.resize(10);
    v.push_back(11);
    for(auto i = v.begin();i != v.end();i++) 
    // begin()类似于指针
    // end()指向最后一个元素的下一个位置
    {
        cout << *i << " ";
    }
    return 0;

}