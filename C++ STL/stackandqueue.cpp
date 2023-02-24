#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(1);  
    s.push(2);
    s.push(3);

    queue<int>q; 
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;

    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}