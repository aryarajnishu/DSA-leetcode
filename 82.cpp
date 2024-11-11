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

void deleteDuplicates(ListNode* &head){
    vector<int> ans;
    ListNode* temp = head;
    while(temp != NULL){
        ans.push_back(temp->val);
        temp = temp->next;
    }
    unordered_map<int,int> map;
    for(auto i: ans){
        map[i]++;
    }
    vector<int> nums;
    for(int i=0 ; i<ans.size() ; i++){
        if(map[ans[i]] == 1) nums.push_back(ans[i]);
    }
    

    ListNode* temp2 = new ListNode(-1);
    ListNode* temp3 = temp2;
    for(auto i : nums){
       ListNode* temp4 = new ListNode(i); 
       temp3 ->next = temp4;
       temp3 = temp3->next;
    }

    print(temp2->next);



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
    cout<<endl;
    deleteDuplicates(head);

    
}
