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

void mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        int sum = 0;
        vector<int> ans;
        while(temp != NULL){
            while(temp->val != 0){
                sum = sum + temp->val;
                temp = temp->next;
            }
            ans.push_back(sum);
            sum = 0;
            temp = temp->next;
        }
        ListNode* answ = new ListNode(0);
        ListNode* tail = answ;
        for(int x:ans){
            insertAttail(tail , x);
        }
        print(answ->next);
    }

int main(){
    ListNode* node1 = new ListNode(0);
    ListNode* tail = node1;
    ListNode* head = node1;
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 0);
    insertAttail(tail , 1);
    insertAttail(tail , 2);
    insertAttail(tail , 6);
    insertAttail(tail , 0);
    insertAttail(tail , 2);
    insertAttail(tail , 6);
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 0);
    print(head);
    cout<<endl;
    mergeNodes(head);
}
