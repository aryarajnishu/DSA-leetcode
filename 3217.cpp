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
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
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

void insertAtpositon( node* &head , node* &tail , int position , int data){
    if(position == 1){
        insertAthead(head,data);
        return;
    }
    node* temp = head;
    int pos = 1;
    while(pos < position-1){
        temp = temp->next;
        pos++;
    }
    if(temp->next == NULL){
        insertAttail(tail,data);
        return;
    }
    node* nodeToinsert = new node(data);
     nodeToinsert->next = temp->next;
    temp-> next  =  nodeToinsert;

}


void deleteAtposition(node* &head , int position){
    if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* pre = NULL;
        int count = 1;
        while(count < position){
            pre = curr;
            curr = curr->next;
            count++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    // 1,2,3,4,5
    node* node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    insertAttail(tail , 2);
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 5);
    print(head);
    cout<<endl;
    vector<int> ans1;
    
    node* temp = head;
    while(temp != NULL){
        ans1.push_back(temp->data);
        temp = temp->next;
    }

    for(auto i : ans1){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> ans2 = {1,2,3};

    for(auto i : ans2){
        ans1.erase(remove(ans1.begin(), ans1.end(), i), ans1.end());
    }

    for(auto i : ans1){
        cout<<i<<" ";
    }cout<<endl;


    // insertAtpositon( head ,tail, 6 , 110);
    // cout<<"head "<<head->data<<" :  tail  "<<tail->data<<endl;
    // cout<<"befor deletion :- "<<" ";
    // print(head);

    // deleteAtposition(head , 4);
    // cout<<"arter deletion :- "<<" ";
    // cout<<"jasn xasiudasjd"<<endl;
    // print(head);

}
