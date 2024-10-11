#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};
int gf(int n,int m){
    int x = min(n,m);
    for(int i=x ; i>0 ; i--){
        if(n%i==0 && m%i==0){
            return i;
        }
    }
    return -1;
}
void insertAttail(node* &tail,int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void printlist(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void f(node* &head){
    node* temp = head;
    while(temp != NULL && temp->next != NULL){
        int x = temp->data , y=temp->next->data;
        int n = gf(x,y);
        node* tempAdd = new node(n);
        tempAdd->next = temp->next;
        temp->next = tempAdd;
        
        temp = temp->next->next;
    }
    printlist(head);
}

int main(){
    node* head = new node(18);
    node* tail = head;
    insertAttail(tail , 6);
    insertAttail(tail , 10);
    insertAttail(tail , 3);
    printlist(head);
    f(head);
    // cout<<gf(18,6)<<endl;
    // cout<<gf(6,10)<<endl;
    // cout<<gf(10,3)<<endl;
    
}