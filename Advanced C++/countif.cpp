#include<bits/stdc++.h>
using namespace std;

bool isPositive(int n) {
    return n>0;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& i : v){
        cin>>i;
    }
    int count = count_if(v.begin(),v.end(),isPositive);
    cout<<count<<endl;
}