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

    vector<int> v = {1 ,2 , 3, 4 ,9};

    cout<<v.size()<<endl;

    v.push_back(10);
    cout<<v.size()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.push_back(22);

    cout<<"Elements are: "<<endl;

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    cout<<v.size()<<endl;
}