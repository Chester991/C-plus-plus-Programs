#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,1,1,3,3,4,4,8,8,9,2,2,3,3,8,8};
    set<int> s(v.begin(),v.end());
    
    for(auto i : s){
        cout<<i<<endl;
    }

    return 0;
}