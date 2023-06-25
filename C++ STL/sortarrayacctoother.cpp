#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    std::cin>>n;
    vector<int>a(n);
    vector<char>b(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }
    pair<int,char>p[n];
    for(int i=0;i<n;i++){
        p[i] = {a[i],b[i]};
    }
    std::sort(p,p+n);
    for(int i =0;i<n;i++){
        std::cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}