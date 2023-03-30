#include<bits/stdc++.h>
using namespace std;

class animal{
    private:
    int x;
    public:
    animal(int x){
        this->x=x;
    }

    friend void print(animal &obj);       
};

void print(animal &obj){
    cout<<obj.x<<endl;//will show error as x is private 
}

int main(){
    animal obj(5);
    //cout<<obj.x<<endl;//wll show error as data members are private inside animal class
    print(obj);
    return 0;
}