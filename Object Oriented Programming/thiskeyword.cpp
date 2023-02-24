#include<bits/stdc++.h>
using namespace std;

class podu{
    public:
    int age;
    string name;
    char grade;

    podu(int age,int grade){
        cout<< this <<endl; 
        this -> age = age;
        this -> grade = grade;
    }

    void display(){
        cout<< age << "  " << grade << endl;
    }
};

int main(){
    podu d1(101,'a');
    d1.display();

    podu d2(232,'r');
    d2.display();

    return 0;
}