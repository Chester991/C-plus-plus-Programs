#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(){//no arguments passed default constructer
        length=0;
        breadth=0;
    }
    Rectangle(int x,int y){//Parameterized constructer as two arguments are passed
        length=x;
        breadth=y;
    }
    Rectangle(Rectangle& r){
        length=r.length;
        breadth=r.breadth;
    }
};

int main(){
    Rectangle r(5,10);
    cout<<r.length<<" "<<r.breadth<<endl;
    cout<<endl;
    Rectangle r3 = r;
    
    return 0;
}