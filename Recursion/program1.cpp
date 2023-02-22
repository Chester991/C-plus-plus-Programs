#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }
    int ans = n * f(n-1);
    return ans;
}

int main(){
    int i = f(4);
    cout<<i<<endl;
    return 0;
}