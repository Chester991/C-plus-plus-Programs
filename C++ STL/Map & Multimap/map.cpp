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

    map<int,int>mp;
    mp[-1] = 23;
    mp[2] = 55;
    mp[5] = 90;
    mp[7] = 11;

    for(auto i = mp.begin(); i!=mp.end();i++){
        cout<< i->first<<" "<<i->second<<endl;
    }
}