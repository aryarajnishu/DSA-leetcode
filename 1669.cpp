#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};


void insertAthead(node* &head , int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAttail(node* &tail , int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
     node* node1 = new node(10);
     node* head = node1;
     node* nishu = node1;
     node* tail = node1;
    insertAttail(tail , 20);
    insertAttail(tail , 30);
    insertAttail(tail , 40);
    insertAttail(tail , 50);
    insertAttail(tail , 60);
    insertAttail(tail , 70);
    
    print(head);

}




















