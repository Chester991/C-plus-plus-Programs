#include<bits/stdc++.h>
using namespace std;

class ayush{
    public:
    ayush(){
        cout<<"Constructer called"<<endl;
    }
};

int main(){
    ayush s1;
    ayush *s2 = new ayush;

    return 0;
}