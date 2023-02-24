#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    void eat(){
        cout<<"This animal is eating"<<endl;
    }
    void sleep(){
        cout<<"This animal is sleeping"<<endl;
    }
};

class Dog : public Animal{
    public:
    string name = "Tucker";
};

int main(){

    Dog dog1;
    dog1.eat();
    cout<<dog1.name<<endl;

    return 0;
}