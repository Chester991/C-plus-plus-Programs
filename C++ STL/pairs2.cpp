#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int,pair<int,string>> p = {1,{3,"abc"}};
    cout<<p.first<<" "<<p.second.second<<endl;
    cout<<p.second.first;
}