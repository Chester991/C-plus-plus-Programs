#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;//data of the current node
    Node* next; //pointer pointing to next node

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}