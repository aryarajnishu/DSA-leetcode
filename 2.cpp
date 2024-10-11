#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        this-> val = data;
        this-> next = NULL;
    }
    ~ListNode(){
        int value = this->val;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertAttail(ListNode* &tail , int data){
    ListNode* temp = new ListNode(data);
    tail->next = temp;
    tail = temp;
}

void print(ListNode* &head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->val <<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int reverse(ListNode* &head){
    int n1 =0;
    while(head != NULL){
            n1 = n1+head->val;
            n1 = n1*10;
            head = head->next;
        }
        return n1;
}



int main(){
    ListNode* node1 = new ListNode(1);
    ListNode* tail = node1;
    ListNode* head = node1;
    insertAttail(tail , 2);
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    cout<<3/10;
    // print(head);
    // cout<<reverse(head);
}
