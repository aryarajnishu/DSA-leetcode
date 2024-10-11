#include <iostream>
#include <utility> // for pair
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

pair<int, int> sumAndCount(TreeNode* root) {
    if (root == nullptr) {
        return {0,0};
    }

    pair<int, int> leftPair = sumAndCount(root->left);
    pair<int, int> rightPair = sumAndCount(root->right);

    int sum = root->val + leftPair.first + rightPair.first;
    int count = 1 + leftPair.second + rightPair.second;

    return {sum, count};
}

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    pair<int, int> result = sumAndCount(root);
    cout << "Sum of all nodes: " << result.first << endl;
    cout << "Number of nodes: " << result.second << endl;

    // Remember to free the memory allocated for the tree nodes
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
