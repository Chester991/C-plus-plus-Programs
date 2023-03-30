#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;

    Complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    Complex operator+(Complex &c)
    {
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.imaginary = imaginary + c.imaginary;
        return ans;
    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(5, 6);

    //  now if we do c1 + c2 our complex operator will be called
    Complex c3 = c1 + c2;
    cout<<c3.real<<"+i"<<c3.imaginary<<endl;
    return 0;
}