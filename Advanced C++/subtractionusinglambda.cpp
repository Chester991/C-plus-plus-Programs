#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int sub = accumulate(v.begin() + 1, v.end(),v[0],[] (int a, int b) { return a-b;});
    cout<<sub<< endl;
}