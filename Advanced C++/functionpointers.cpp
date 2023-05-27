#include <bits/stdc++.h>
using namespace std;

int fun(int x, int y)
{
    return (x + y);
}

int main()
{
    //fun_ptr is holding address of fun.
    auto fun_ptr = fun;
    cout << fun_ptr(20, 10) << endl;
}