#include<iostream>
#include<cstring>
#include<cmath>
#include<bitset>

using namespace std;

int main(void)
{
    bitset<5> b("11");
    cout << b << endl;
    for(auto i = 0; i < b.size();i++)
    cout << b[i] << " ";

    cout << b.any() << endl; // 是否存在1
    cout << b.none() << endl; // 是否不存在1
    cout << b.size() << endl; // b中的元素个数
    cout << b.count() << endl; // b中1的个数

    b.flip(1); // 将b中下标为1的元素取反

    for(auto i = 0; i < b.size();i++)
    cout << b[i] << " ";

    unsigned long a = b.to_ulong(); // 将b转换为整数      

    return 0;

}