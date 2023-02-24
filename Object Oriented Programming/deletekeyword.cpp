#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p = new int[3];

    p[1] = 45;
    p[0] = 76;
    p[2] = 34;

    delete p;
    
    cout<< p[0] << " " << p[1]<< " " << p[2] <<endl;


    return 0;
}