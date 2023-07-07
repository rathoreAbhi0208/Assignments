#include <iostream>
using namespace std;

// Function to calculate the depth of binary tree
int calculateDepth(string preorder, int &index)
{
    if (index >= preorder.length())
        return 0;

    if (preorder[index] == 'l')
        return 0;

    index++;
    int leftDepth = calculateDepth(preorder, index);
    index++;
    int rightDepth = calculateDepth(preorder, index);

    return max(leftDepth, rightDepth) + 1;
}

int getDepth(string preorder)
{
    int index = 0;
    return calculateDepth(preorder, index);
}

int main()
{
    string preorder = "nlnll";
    int depth = getDepth(preorder);
    cout << "Depth of the binary tree: " << depth << endl;
    return 0;
}
