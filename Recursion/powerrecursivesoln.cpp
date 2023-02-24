#include<bits/stdc++.h>
using namespace std;

int power(int p,int q){
    if(q==0) return 1;
    return p * power(p,q-1);
}

int main(){
    int result = power(2,6);
    cout<<result<<endl;
    return 0;
}