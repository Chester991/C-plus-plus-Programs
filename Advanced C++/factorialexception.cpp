#include <bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    if (a < 0)
    {
        throw string("We cannot calculate factorial of a negative number.Please enter another number");
    }
    int result = 1;
    for (int i = a; i > 0; i--)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int n;
    do
    {
        cin >> n;
        try
        {
            int fact = factorial(n);
            cout << "Factorial of " << n << " is " << fact << endl;
        }
        catch (string str)
        {
            cout << str << endl;
        }
    } while (n < 0);
}