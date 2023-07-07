#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> findNextGreater(const vector<int>& arr) {
    stack<int> stack;
    int n = arr.size();
    vector<int> nextGreater(n, -1);

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements
        while (!stack.empty() && stack.top() <= arr[i]) {
            stack.pop();
        }

        // If the stack becomes empty
        if (stack.empty()) {
            nextGreater[i] = -1;
        } else {
            nextGreater[i] = stack.top();
        }

        // Push arr[i] onto the stack
        stack.push(arr[i]);
    }

    return nextGreater;
}

int main() {
    vector<int> arr = {1, 3, 2, 4};
    vector<int> result = findNextGreater(arr);

    // Output the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
