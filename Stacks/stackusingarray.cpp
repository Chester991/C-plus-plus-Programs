#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>=1){
            top++;
            arr[top] = element;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

};

int main(){
    Stack s1(6);
    s1.push(220);
    s1.push(33);
    s1.push(88);
    s1.push(55);
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.isEmpty()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.isEmpty()<<endl;
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    return 0;
}