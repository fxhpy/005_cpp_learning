#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

void c(int &a)
{
    a +=1; 
}
int main(void)
{
    int a;
    cin >> a;
    c(a);
    cout << a << endl;

    return 0;

}