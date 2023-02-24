#include<bits/stdc++.h>
using namespace std;

class oopm{
    public:
    int x;
    void print(){
        cout<<"Hello"<<endl;
    }
    void print2(){
        cout<<"GoodBye"<<endl;
    }
};

int main(){
    oopm object1;
    object1.print();

    oopm *object2 = new oopm;
    (*object2).print();
    object2->print();

    oopm *object3 = new oopm;
    object3->print2();

    return 0;
}