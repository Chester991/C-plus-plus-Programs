#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent class constructer called"<<endl;
    }
};

class Child : public Parent{
    public:
    Child(){
        cout<<"Child class constructer called"<<endl;
    }
};

int main(){
    Child a;//by this parent class constructer will be called first then Child class constructer will be called
    return 0;
}