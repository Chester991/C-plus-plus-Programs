#include <bits/stdc++.h>
using namespace std;

class prasad
{
public:
    int rollnumber;
    string name;
    int age;

    prasad()
    {
        cout << "Constructer Called"<<endl;
    };

    prasad(int r,int a,string str){
        cout<<"Constructer 2 called "<<endl;
        rollnumber = r;
        age = a;
        name = str; 
    }

    void display(){
        cout<<rollnumber<< "  " << age << endl;
        cout<<name<<endl;
    }
};

int main()
{
    prasad t1;
    t1.display();

  //  prasad t2(565);
   // t2.display();

    prasad* t3 = new prasad(90,999,"guashetty");
    t3->display();



    return 0;
}