#include<bits/stdc++.h>
using namespace std;

int print(int n){
    if(n>0){
        cout<<n<<endl;
        n--;
        print(n);
    }
    return n;
}

int main(){
    print(5);
    return 0;
}