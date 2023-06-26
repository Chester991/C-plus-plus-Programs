#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a < b;
};

int main(){
    vector<int>v = {45,89,45,65,212,4,889,41};
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        cout<<i<<endl;
    }
}