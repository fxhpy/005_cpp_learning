#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int> a(10,1);
    for(int i:a)
    cout << i << " ";
    cout << endl;

    return 0;

}