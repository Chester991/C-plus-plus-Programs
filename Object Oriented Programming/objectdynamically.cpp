#include <bits/stdc++.h>
using namespace std;

class life
{
public:
    int age;
    string name;
    double salary;
    char icon;
};

int main()
{
    life s1;
    cout << "age is" << age(22) << endl;

    cout << "age is" << s1.age << endl;

    life *s2 = new life;

    return 0;
}