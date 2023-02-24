#include<bits/stdc++.h>
using namespace std;

class s1{
    public:
    s1(){
        cout<<"Constructer called"<<endl;
    }

    ~s1(){
        cout<<"Destructor Called"<<endl;

    }

};

int main(){
    s1 a;
    s1 *b = new s1();
    

    return 0;
}