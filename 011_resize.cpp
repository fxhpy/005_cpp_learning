#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector <int> v;
    v.resize(10);
    for(int i =0; i <10;i++)
    {
        v[i] = i;
    }
    v.push_back(12);
    for(int i =0; i < 11;i++)
        cout << v[i] << " ";
    return 0;
}