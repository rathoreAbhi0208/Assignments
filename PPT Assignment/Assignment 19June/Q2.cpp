#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> findNearestSmaller(const vector<int>& a) {
    stack<int> stack;
    int n = a.size();
    vector<int> nearestSmaller(n, -1);

    // Traverse the array from left to right
    for (int i = 0; i < n; i++) {
        // Pop elements
        while (!stack.empty() && stack.top() >= a[i]) {
            stack.pop();
        }

        // If the stack becomes empty
        if (stack.empty()) {
            nearestSmaller[i] = -1;
        } else {
            nearestSmaller[i] = stack.top();
        }

        // Push a[i] onto the stack
        stack.push(a[i]);
    }

    return nearestSmaller;
}

int main() {
    int n = 3;
    vector<int> a = {1, 6, 2};
    vector<int> result = findNearestSmaller(a);

    // Output the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
