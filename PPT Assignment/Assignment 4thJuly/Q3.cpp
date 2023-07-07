#include <iostream>
#include <queue>
using namespace std;

// Definition of a binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


void printRightView(TreeNode *root)
{
    if (root == NULL)
        return;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            TreeNode *current = q.front();
            q.pop();

            if (i == size - 1)
                cout << current->val << " ";

            // Add the left and right children to the queue
            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
    }
}

int main()
{
    // Create the binary tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->right = new TreeNode(8);

    // Print the right view of the binary tree
    cout << "Right view: ";
    printRightView(root);

    return 0;
}
