#include <bits/stdc++.h>
using namespace std;

class gandu
{
public:
    int rollnumber;
    double fesspaid;
    string name;

    gandu()
    {
        cout << "Constructer Called" << endl;
    }

    void display()
    {
        cout << rollnumber << "  " << name << endl;
    }
};

int main()
{
    gandu r1;
    r1.display();

    gandu *r2 = new gandu;
    (*r2).display();
    r2->display();

    return 0;
}