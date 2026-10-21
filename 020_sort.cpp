#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    vector<int> m(9);
    for(int i = 9 ;i > 0; i--)
        m[i] = 9 - i;

    m.push_back(-5);

    for(int i = 0 ;i<10 ;i++)
        cout << m[i] << " ";
    cout << endl; 

    sort(m.begin(), m.end());

    for(int i = 0 ;i<10 ;i++)
        cout << m[i] << " ";

    return 0;

}