#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main(void)
{
    string s1 = "hello ";
    string s2 = "world!";
    string s = s1 + s2;
    
    getline(cin,s);

    cout << s << endl;
    cout << s.length() << endl;
    return 0;

}