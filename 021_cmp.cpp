#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
    bool cmp(int x, int y) // 这个cmp要放在main之前
    {
        return x > y; // 从大到小进行排序
    }
int main(void)
{
    vector<int> wm;
    for(int i = 0; i<10; i++)
    wm.push_back(i);

    sort(wm.begin(), wm.end(), cmp);

    for(auto i = wm.begin(); i != wm.end(); i++)
        cout << *i << " ";
    
    return 0;

}