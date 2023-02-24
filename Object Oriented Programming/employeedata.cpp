#include<bits/stdc++.h>
using namespace std;

class Employee {
public:    
    string Name;
    string company;
    int Age;

    void IntroduceYourself(){
        cout<<"Name - "<< Name << endl;
        cout<<"Company - "<< company << endl;
        cout<<"Age - "<< Age << endl;
    }
    Employee(string name, string company , int age){
         Name = name;
         Company = company;
         Age = age;
    }
};

int main(){
    Employee employee1;
    employee1.Name = "Ayush";
    employee1.company = "VESIT";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    return 0;
}