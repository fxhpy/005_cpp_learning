#include<iostream>
#include<cstring>
#include<cmath>
#include<stack>

using namespace std;

int main(void)
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    s.push(4);

    cout << s.top() << endl;
    cout << s.size() << endl;

    return 0;
}