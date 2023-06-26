#include <bits/stdc++.h>
using namespace std;

#define endl

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int,int> a;
    cin>>a.first>>a.second;

    pair<int,int> b;
    cin>>b.first>>b.second;

    cout<<(a < b);// 0 means false 1 means true
}