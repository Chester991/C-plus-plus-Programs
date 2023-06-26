#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int n;
    std::cin>>n;
    vector<int>a(n);
    vector<char>b(n);
    vector<pair<int,char>>pa;

    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }
    int start = 0;
    int end = n-1;
    while(end >= 0){
        pa.push_back(make_pair(a[start],b[end]));
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        std::cout<<pa[i].first<<" "<<pa[i].second<<endl; 
    }
}