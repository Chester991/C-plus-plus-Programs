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

    map<int,int>freq;
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto i : arr){
        freq[i]++;
    }
    for(auto it = freq.begin();it !=freq.end();it++){
        int key = (*it).first;
        int value = (*it).second;

        cout<<key<<" : "<<value<<endl;
    }
}