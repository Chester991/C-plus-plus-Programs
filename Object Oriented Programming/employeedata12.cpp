#include<bits/stdc++.h>
using namespace std;

class data{
    private:
    double salary;
    string city;
    int experience;
    public:
    int age;
    string company;
    string name;

    


    double getsalary() {
        return salary;
    };

    string getcity(){
        return city;
    };

    int getexperience(){
        return experience;
    };

    void setSalary(int s){
        salary = s;
    };

    void setCity(string c){
        city = c; 
    };

    void setExperience(int e){
        experience = e;
    };

};

int main(){
    data hitesh;
    hitesh.name = "Hitesh";
    hitesh.company = "LearnApp";
    hitesh.age = 22;
    hitesh.setSalary(900000);
    hitesh.setExperience(4);
    //hitesh.salary=90000;

    data namrata;
    namrata.name = "Namu";
    namrata.age = 26;
    namrata.setSalary(25655);
    namrata.setcity("NewYork");
    //namrata.city="NewYork";

    cout<<"Hitesh age is : "<< hitesh.age<<endl;
    cout<<"Namrata age is : "<< namrata.age<<endl;
    cout<<"Hitesh salary is : "<<hitesh.getsalary()<<endl;
    cout<<"Namarata salary is : "<<namrata.getsalary()<<endl;
    cout<<"Hitesh Experience is : "<<hitesh.getexperience()<<endl;
    cout<<"Namaraata city is : "<<namrata.getcity<<endl;
    return 0;
}