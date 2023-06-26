#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,3,4,5,6};
    iota(v.begin(),v.end(),4);
    for(auto i:v){
        cout<< i << " ";
    }
    cout<<endl;
    return 0;
}