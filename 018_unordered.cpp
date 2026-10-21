#include<iostream>
#include<cstring>
#include<unordered_set>
#include<unordered_map>

using namespace std;

int main(void)
{

    unordered_set<string> s;
    unordered_map<string,int> m;

    s.insert("hello");
    s.insert("world");
    s.insert("printf");
    s.insert("scanf");

    m["hello"] = 1;
    m["world"] = 2;
    m["printf"] = 3;
    m["scanf"] = 4;

    for(auto i = s.begin(); i != s.end(); i++)
    cout << *i << endl;
    
    for(auto i = m.begin();i != m.end();i++)
    cout << i->first << " " << i->second << endl;

    return 0;

}