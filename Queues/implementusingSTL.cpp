#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(11);
    q.push(15);
    q.push(45);
    cout<<"Size of queue is : "<<q.size()<<endl;
    cout<<"Front element is : "<<q.front()<<endl;
    q.pop();
    cout<<"Front element is : "<<q.front()<<endl;
    cout<<"Size of queue is : "<<q.size()<<endl;


    return 0;
}