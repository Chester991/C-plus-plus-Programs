#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {-1,0,-2,2,6,-8};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    return 0;
}