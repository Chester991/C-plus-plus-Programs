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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int t;cin>>t;
    while(t--){
        int num;
        cin>>num;

        cout<<hash[num]<<endl;
    }
}