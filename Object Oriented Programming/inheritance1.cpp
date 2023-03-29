#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

int main()
{
    Parent p1;
    p1.x = 99;
    cout << p1.x << endl;

    return 0;
}