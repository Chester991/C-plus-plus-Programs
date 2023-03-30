#include<bits/stdc++.h>
using namespace std;

class Sum{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }
    void operator+ (Sum &difference){
        int value1 = this->a;
        int value2 = difference.a;
        cout<<"output = "<< value1-value2<<endl;
    }
};

int main(){

    Sum obj1,obj2;
    obj1.a = 12;
    obj2.a = 5;

    obj1+obj2;

    return 0;
}