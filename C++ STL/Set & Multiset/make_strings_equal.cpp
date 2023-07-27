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

    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<char, int> mp;
    for (auto str : arr) // for every string inside the array
    {
        for (auto ch : str) // for every character inside the string
        {
            mp[ch]++; // make the character as index of map and set its value to number of times it is occuring in whole array
        }
    }
    bool possible = true;
    for (auto i : mp)              
    {
        if (i.second % n != 0) /* for every key(element) in the map if its value is not a mutlipe of array length then strings cannot be made equal */
        {
            possible = false;
            break;
        }
    }
    if(possible){
        cout<<"String can be made equal"<<endl;
    }
    else{
        cout<<"String cannot be made equal"<<endl;
    }
}