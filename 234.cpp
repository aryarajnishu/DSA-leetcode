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

ListNode* mid(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* reverse(ListNode* &head){
    ListNode* curr = head;
    ListNode* pre = NULL;
    while(curr != NULL){
        ListNode* temp = curr->next;
        curr->next = pre;
        pre = curr;
        curr = temp;
    }
    return pre;
}

bool ispalindrome(ListNode* head){
    if(head->next == NULL){
        return true;
    }
    ListNode* middle = mid(head);
    ListNode* temp = middle->next;
    middle->next = reverse(temp);
    ListNode* head1 = head;
    ListNode* head2 = middle->next;

    while(head2 != NULL){
        if(head1->val != head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main(){
    ListNode* node1 = new ListNode(1);
    ListNode* tail = node1;
    ListNode* head = node1;
    insertAttail(tail , 2);
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 3);
    insertAttail(tail , 2);
    insertAttail(tail , 1);
    print(head);
    cout<<ispalindrome(head)<<endl;
}
