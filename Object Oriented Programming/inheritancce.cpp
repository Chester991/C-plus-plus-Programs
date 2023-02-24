#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int age;
};
class Male: public Human{
    public:
    string color;
    int salary;
};
class Female:public Human{
    public:
    char buetygrade;
    int size;
};

int main(){

    Female s1;
    Male s2;

    s2.salary = 9000;
    s1.age = 20;
    s1.buetygrade='A';

    return 0;
}