#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;//Value of the current node
    Node* next;//pointer pointing to next node
    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* new_node = new Node(val);//create a new node pointing to null with value val
    new_node->next= head; // replace null with head 
    head = new_node;//head pointer will hold address of new node
}

void display(Node* head){
    Node* temp = head;// a pointer pointing to head that is first node of the LL
    while(temp!=NULL){
        cout<<temp->val<<"->";// printing the value of the node where temp is cuurently pointing at
        temp=temp->next;// incrementing the address of temp to next next node
    }
    cout<<"NULL"<<endl;//after traversing the next node print the last address that is NULL
}

void insertAtTail(Node* &head,int val){
    Node* new_node = new Node(val);//a node named new node with value val pointing to null
    Node* temp = head;//a temp pointer pointing to head that is first node of LL
    while(temp->next!=NULL){
        temp=temp->next;
    }//by this loop we will have reached last node of LL
    //cuurently temp->next is pointing to NULL becz we are at last node
    temp->next=new_node;//by this new node will be added at last
}

void insertAtPosition(Node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){// pos - 1 meaning jo position hum uske andar pass karenge
        temp=temp->next; 
        current_pos++;   
    }//by this loop temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next=new_node;
}

int main(){

    Node* head = NULL; //Creating a empty node pointing to NULL
    display(head); //display the value of node currently pointing to head
    insertAtHead(head,10);
    display(head);
    insertAtHead(head,15);
    display(head);
    insertAtHead(head,20);
    insertAtHead(head,25);
    insertAtHead(head,35);
    insertAtHead(head,40);
    display(head);
    insertAtTail(head,5);
    display(head);
    insertAtPosition(head,4,3);
    display(head);

    return 0;
}