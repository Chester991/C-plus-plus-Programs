#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(auto& i : v){
        cin>>i;
    }
    int count = count_if(v.begin(),v.end(),[] (int a){return a>0;});
    cout<<count<<endl; 
}