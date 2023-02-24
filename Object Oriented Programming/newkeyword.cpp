#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int *p1 = &a;

    int *p2 = new int(4);

    cout << *p1 << endl;
    cout<< *p2 << endl; 
    return 0;
}