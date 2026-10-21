#include<iostream>
#include<cstring>
#include<vector>
#include<cctype>

using namespace std;

int main(void)
{
    char c = 'A'; // 注意这里是单引号
    cout << isalpha(c) << endl;
    cout << islower(c) << endl;
    cout << isupper(c) << endl;
    cout << isspace(c) << endl;
    cout << isalnum(c) << endl;

    char s = tolower(c);
    cout << s << endl;
    char t = toupper(c);
    cout << t << endl;

    return 0;

}
