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

int len(ListNode* &head){
        int count =0;
        ListNode* temp = head;
        while(temp!= NULL){
           temp = temp->next;
           count++;
        }
        return count;
    }

int value(ListNode* head, int k) {
        ListNode*temp = head;
        int count = 1;
        while(count < k){
            temp = temp->next;
            count++;
        }
        return temp->val;
    }

int main(){
    ListNode* node1 = new ListNode(1);
    ListNode* tail = node1;
    ListNode* head = node1;
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 7);
    insertAttail(tail , 1);
    insertAttail(tail , 2);
    insertAttail(tail , 6);
    print(head);
    int k = 3;
    int n = len(head);
        int x = value(head,k),y=value(head,n-k+1);
        ListNode* temp = head;
        int count = 1;
        while(temp!=NULL){
            if(count == k){
                temp->val = y;
            }
            if(count == (n-k+1)){
                temp->val = x;
            }
            temp = temp->next;
            count++;
        }
        print(head);

}
