#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top >= 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 1)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s1(5); // here size of stack is 5
    s1.push(22); // 0th index
    s1.push(55); // 1st index
    s1.push(58); // 2nd index
    s1.push(25); // 3rd index
    s1.push(15); // 4th index
    cout << s1.peek() << endl;
    s1.push(4);  // 5th index
    s1.push(88); // will not go inside as stack overflow
    cout << s1.peek() << endl;
    s1.pop();
    cout<<s1.peek() <<endl;
    return 0;
}