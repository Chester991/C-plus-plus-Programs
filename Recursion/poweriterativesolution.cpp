#include<bits/stdc++.h>
using namespace std;

int power(int p,int q){
    int ans = 1;
    for(int i=1;i<=q;i++){
        ans = ans * p;
    }
    return ans;
}

int main(){
    int x = power(4,2);
    cout<<x<<endl;
    return 0;
}