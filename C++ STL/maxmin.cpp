#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5};
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.end())<<endl;

    return 0;
}