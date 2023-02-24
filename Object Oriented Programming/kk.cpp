#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int max, current;
    max = current = a[0];

    for (int i = 1; i < size; i++)
    {
        current = current + a[i];
        if (a[i] > current)
        {
            current = a[i];
        }
        if (current > max)
        {
            max = current;
        }
    }
    cout << max << endl;

    return 0;
}