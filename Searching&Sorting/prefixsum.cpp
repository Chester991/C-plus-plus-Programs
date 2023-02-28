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

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p[n];
    for(int i=0;i<n;i++){
        p[i]=0;
        for(int j=0;j<=i;j++){
            p[i]=p[i]+a[j];
        }
    }
    for(auto i : p){
        cout<<i<<endl;
    }
}