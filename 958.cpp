#include <bits/stdc++.h>
using namespace std;

// Definition of a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to perform level order traversal
void levelOrderTraversal(TreeNode* root) {

    
    if (root == NULL) {
        cout << "Tree is empty." << endl;
        return;
    }

    vector<vector<int>> ans; // To store level-wise nodes
    vector<int> nums;        // Temporary storage for a single level
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL); // Marker for end of a level

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current == NULL) { // End of a level
            ans.push_back(nums); // Store the level
            nums.clear();        // Clear for the next level
            if (!q.empty()) {
                q.push(NULL); // Add marker for next level if queue is not empty
            }
        } else {
            nums.push_back(current->val);
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }

    // Print the level order traversal
    cout << "Level Order Traversal: " << endl;
    for (auto& level : ans) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Predefined tree structure:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    levelOrderTraversal(root);
    return 0;
}
