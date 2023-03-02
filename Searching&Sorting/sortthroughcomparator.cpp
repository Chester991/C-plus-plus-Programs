#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool cmp(int a,int b){
    return abs(a) < abs(b);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
}