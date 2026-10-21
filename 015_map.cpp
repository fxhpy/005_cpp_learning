#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
// map存储的是键值对，键是唯一的，值可以重复

using namespace std;

int main(void)
{
    map<string,int> m;
    m["hello"] = 1;
    m["world"] = 2;
    m["image"] = 3;
    // map排序是按照首字符的ascii码排序的

    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << ":" << i->second << endl;
    }

    m.size();
    cout << "size:" << m.size() << endl;

    return 0;

}