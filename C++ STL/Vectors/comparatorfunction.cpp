#include<bits/stdc++.h>
using namespace std;

bool compare (int a,int b){
    return a>b;
}

int main(){

    vector<int> v ={4,5,1};
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}