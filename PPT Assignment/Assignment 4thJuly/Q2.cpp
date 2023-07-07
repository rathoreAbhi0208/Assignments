#include<bits/stdc++.h>
using namespace std;

// Definition of a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to print the left view of a binary tree
void printLeftView(TreeNode* root) {
    if (root == NULL)
        return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        // Traverse all nodes at the current level
        for (int i = 0; i < size; i++) {
            TreeNode* current = q.front();
            q.pop();

            
            if (i == 0)
                cout << current->val << " ";

            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
    }
}

int main() {
    // Create the binary tree
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(5);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(1);
    root->right->left->left = new TreeNode(6);
    root->right->left->right = new TreeNode(7);

    // Print the left view of the binary tree
    cout << "Left view: ";
    printLeftView(root);
    
    return 0;
}
