#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr1(n),arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }  
    pair<int,int>pa[n];
    for(int i=0;i<n;i++){
        pa[i] = {arr1[i],arr2[i]};
    } 
    for(auto i : pa){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}