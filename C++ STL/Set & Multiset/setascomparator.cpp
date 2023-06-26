#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a>b;
}

int main(){
    set<int> s;
    s.insert(8);
    s.insert(-1);
    s.insert(10);
    s.insert(-11);
    s.insert(-11);
    s.insert(8);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}