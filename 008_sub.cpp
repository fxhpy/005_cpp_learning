#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main(void)
{
    string s;
    getline(cin,s);
    string sub;
    sub = s.substr(1,2); // 从第1个字符开始的2个字符
    sub = s.substr(4); // 从第4个字符开始的后面所有字符

    cout << s << endl;
    cout << s.length() << endl;
    cout << sub << endl;

    return 0;
}