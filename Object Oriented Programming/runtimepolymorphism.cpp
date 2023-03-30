#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void print(){ // by making the function virtual which function will be called will be decided at runtime
        cout<<"Parent Class"<<endl;
    }
    void show(){
        cout<<"Parent Class"<<endl;
    }
};

class Child : public Parent{
    public:
     
     void print(){
        cout<<"Child Class"<<endl;
    }
    void show(){
        cout<<"Child Class"<<endl;
    }
};

int main(){

    Parent *p;
    Child c;

    p = &c;
    p->print();// output = Child Class
    p->show();// output = Parent Class
    //we did not define show function as virtual function
    //therefore function overriding will not happen for show() function
    //for function overrriding to happen use virtual keyword
    return 0;
}