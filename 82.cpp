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

// void deleteDuplicates(ListNode* &head) {
//     ListNode* temp = head;
//     while(temp->val == temp->next->val){
//             temp = temp->next->next;
//     }
//     head = temp;
//     ListNode* pre = head;
//     ListNode* curr = pre->next;
//     while(curr != NULL){
//         if(curr->val=curr->next->val){
//             pre->next = curr->next->next->next;
//             curr = curr->next->next;
//             continue;
//         }
//         pre = curr;
//         curr=curr->next;
//     }
// }

// void deleteDuplicates(ListNode* &head){
//     ListNode* curr=head;
//     ListNode* pre = NULL;
//     if(curr->val == curr->next->val){
//         while(curr->val == curr->next->val){
//         pre = curr;
//         curr=curr->next;
//     }
//         head = curr->next;
//     }
//     cout<<head->val;
//     ListNode* curr2 = head;
//     ListNode* pre2 = NULL;
//     while(curr2 != NULL){

//     }
// }

void deleteDuplicates(ListNode* &head){
    ListNode* curr = head;
    ListNode* temp = head;
    ListNode* pre = NULL;
    vector<int> ans;
    while(temp->next != NULL){
        if(temp->val == temp->next->val){
            temp = temp->next;
        }
        else{
            // if(curr->val != temp->next->val){
            //     temp = temp->next;
            //     curr = temp;
            //     pre->next = curr;
            // }
            // else{
                pre = curr;
                temp=temp->next;
                curr = temp;
                pre->next=curr;
            // }

        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    print(head);
}

int main(){
    ListNode* node1 = new ListNode(1);
    ListNode* tail = node1;
    ListNode* head = node1;
    insertAttail(tail , 1);
    insertAttail(tail , 1);
    insertAttail(tail , 1);
    insertAttail(tail , 4);
    insertAttail(tail , 5);
    insertAttail(tail , 5);
    insertAttail(tail , 6);
    insertAttail(tail , 7);
    insertAttail(tail , 7);
    insertAttail(tail , 7);
    insertAttail(tail , 8);
    print(head);
    deleteDuplicates(head);
}
