#include <iostream>

using namespace std;

// Node definition for the binary tree
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

// Function to create a balanced BST from a sorted array
TreeNode* sortedArrayToBST(int arr[], int start, int end) {
  // Base case: empty array or invalid range
  if (start > end) {
    return nullptr;
  }

  // Find the middle index
  int mid = (start + end) / 2;

  // Create a new node with the middle element as the root
  TreeNode* root = new TreeNode(arr[mid]);

  // Recursively construct the left subtree with elements to the left of the middle
  root->left = sortedArrayToBST(arr, start, mid - 1);

  // Recursively construct the right subtree with elements to the right of the middle
  root->right = sortedArrayToBST(arr, mid + 1, end);

  // Return the root node of the balanced BST
  return root;
}

// Function to print the BST in inorder traversal (useful for verification)
void inorderTraversal(TreeNode* root) {
  if (root) {
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Create the balanced BST
  TreeNode* root = sortedArrayToBST(arr, 0, n - 1);

  // Print the BST in inorder traversal (optional)
  cout << "Inorder traversal of the balanced BST: ";
  inorderTraversal(root);
  cout << endl;

  return 0;
}
