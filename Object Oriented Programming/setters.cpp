#include <bits/stdc++.h>
using namespace std;

class ayush
{
private:
    int age;
    string name;
    double fesspaid;

public:

    int getage()
    {
        return age;
    }

    void setage(int a)
    {
        age = a;
    }

    string getname()
    {
        return name;
    }

    void setname(string n)
    {
        name = n;
    }

};

int main()
{
    ayush s1;
    s1.setage(17);
    cout<<"s1 age is : " << s1.getage()<<endl;

    ayush s2;

    s2.setname("Bhushan");
    cout<<"s2 name is : "<< s2.getname()<<endl;

    ayush* s3 = new ayush;
    (*s3).setage(23);
    s3->setage(24);
    cout<<"age of s3 is "<<s3->getage()<<endl;

    return 0;
}