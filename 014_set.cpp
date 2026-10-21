#include<iostream>
#include<cstring>
#include<set>

using namespace std;

int main(void)
{
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(9);
    for(auto i = s.begin();i != s.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << (s.find(2) != s.end()) << endl;
    cout << (s.find(4) != s.end()) << endl;
    // find()从头开始查找，返回一个指针
    s.erase(2); // 删除元素
    for(auto i = s.begin();i != s.end();i++)
    {
        cout << *i << " ";
    }
    return 0;
}