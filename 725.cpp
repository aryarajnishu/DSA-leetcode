#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

vector<ListNode*> splitListToParts(vector<int>& head, int k) {
    vector<ListNode*> ans;

    int size = (head.size() / k);
    if (head.size() % k != 0) {
        size++;
    }
    int size1 = size - 1; 
    int size2 = size; 
    int y = 0;

    for (int i = 0; i < k; i++) {
        ListNode* dummy = new ListNode(0); // Dummy node to help build the list
        ListNode* current = dummy;

        if (i == 0) {
            for (int j = 0; j < size2; j++) {
                current->next = new ListNode(head[y]);
                current = current->next;
                y++;
            }
        } else {
            for (int j = 0; j < size1; j++) {
                current->next = new ListNode(head[y]);
                current = current->next;
                y++;
            }
        }

        ans.push_back(dummy->next); // Add the head of the linked list to ans
    }

    return ans;
}

void printLinkedList(ListNode* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    vector<int> head = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 3;

    vector<ListNode*> result = splitListToParts(head, k);

    // Print the linked lists
    for (int i = 0; i < result.size(); i++) {
        printLinkedList(result[i]);
    }

    return 0;
}
