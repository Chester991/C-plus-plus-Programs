#include<bits/stdc++.h>
using namespace std;

class student{
    int age;
    string name;
    char section;
    double feespaid;

    public:
    student(){}
    void setage(int age){
        this->age=age;
    }
    void setname(string name){
        this->name=name;
    }
    void setsection(char section){
        this->section=section;
    }
    int getage(){
        return age;
    }
    string getname(){
        return name;
    }
    char getsection(){
        return section;
    }
    void setfeespaid(double feespaid){
        this->feespaid=feespaid;
    }
    double getfeespaid(){
        return feespaid;
    }
};

int main(){
    student *kunal = new student;
    kunal->setage(20);
    kunal->setsection('c');
    kunal->setfeespaid(5000);


    cout<<kunal->getfeespaid()<<endl;
    cout<<kunal->getsection()<<endl;


    return 0;
}