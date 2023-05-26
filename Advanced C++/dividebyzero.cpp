#include <bits/stdc++.h>
using namespace std;

int main()
{
    int result;
    int x, y;
    do
    {
        cout << "Enter num and den" << endl;
        cin >> x >> y;
        try
        {
            if (y == 0)
            {
                throw 0;
            }
            result = x / y;
            cout << "Result is " << result << endl;
        }
        catch (int x)
        {
            cout << "Divisor is 0. Please enter another number " << endl;
        }
    } while (y == 0);

    return 0;
}