#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(6);
    s.push(5);

    cout<<"top element is : "<<s.top()<<endl;
    s.push(12);
    s.push(55);

    cout<<"Size of stack is "<<s.size()<<endl;
    s.pop();
    cout<<"top element of stack is "<<s.top()<<endl;

    return 0;
}