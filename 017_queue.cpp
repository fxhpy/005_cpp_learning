#include<iostream>
#include<cstring>
#include<cmath>
#include<queue>

using namespace std;

int main(void)
{
    queue<int> q;
    for(int i = 0; i < 10; i++)
    {
        q.push(i);
    }
    cout << "队首是：" << q.front() << endl;
    cout << "队尾是：" << q.back() << endl;
    q.pop();
    cout << "队首是：" << q.front() << endl;
    cout << "队尾是：" << q.back() << endl;

    cout << q.size() << endl;

    return 0;

}