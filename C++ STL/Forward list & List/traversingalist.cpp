#include<iostream>
#include<vector>
#include<utility>
#include<list>
using namespace std;

int main(){
    int n;cin>>n;
    list<int>l;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        l.push_back(num);
    }
    for(auto it = l.begin();it != l.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}