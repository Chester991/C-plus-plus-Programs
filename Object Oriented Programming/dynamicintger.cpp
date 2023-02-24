#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int *p = &a;

    int *b = new int(5);

    cout<<*p<<" "<<*b<<endl;
    return 0;
}