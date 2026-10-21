#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main(void)
{
struct student{
    std::string name;
    int age;
    float gpa;
};
    student s1 ={"小王",20,4.0};
    student s2 ={};
    student s3 ={.name = "小李",.age = 20};
    return 0;

}