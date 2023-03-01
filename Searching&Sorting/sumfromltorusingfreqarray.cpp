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
    p[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }
    for(auto i : p){
        cout<<i<<" ";
    }
    cout<<endl; 
    cout<<p[5]-p[3-1]<<endl;
    
    int l,u;
    cin>>l>>u;

    cout<<"Sum from "<<l<<" to "<<u<<" is "<<p[u-1]-p[l-2]<<endl;

}