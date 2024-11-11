#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


    void reverseEvenLengthGroups(ListNode* head) {
        vector<vector<int>> nums;
        int s = 1;
        int k = 0;
        while (head != nullptr) {
            nums.push_back(vector<int>()); 
            for (int i = 0; head != nullptr && i < s; i++) {
                nums[k].push_back(head->val);
                head = head->next;
            }
            s++;
            k++;
        }
        for (auto i : nums) {
            for (int j : i) {
                cout << j << " ";
            }
            cout << endl;
        }cout << endl;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i].size() %2 == 0) {
                vector<int> temp = nums[i];
                reverse(temp.begin(), temp.end());
                nums[i] = temp;
            }
        }
        cout<<"after"<<endl;
        for (auto i : nums) {
            for (int j : i) {
                cout << j << " ";
            }
            cout << endl;
        }
        
    }


ListNode* createLinkedList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> values = {1,1,0,6,5};
    ListNode* head = createLinkedList(values);

    cout << "Original linked list: ";
    printLinkedList(head);

    
    reverseEvenLengthGroups(head);

    // If the function modifies the list, print the modified list
    // In this code, reverseEvenLengthGroups currently doesn't modify the list
    // Add list reversal logic as needed
    return 0;
}
