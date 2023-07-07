#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& St, int element) {
    if (St.empty()) {
        St.push(element);
    } else {
        int topElement = St.top();
        St.pop();
        insertAtBottom(St, element);
        St.push(topElement);
    }
}

void reverseStackHelper(stack<int>& St) {
    if (St.empty() || St.size() == 1) {
        return;
    }

    int topElement = St.top();
    St.pop();
    reverseStackHelper(St);
    insertAtBottom(St, topElement);
}

void reverseStack(stack<int>& St) {
    reverseStackHelper(St);
}

int main() {
    stack<int> St;
    St.push(3);
    St.push(2);
    St.push(1);
    St.push(7);
    St.push(6);

    reverseStack(St);

    // Output the reversed stack
    while (!St.empty()) {
        cout << St.top() << " ";
        St.pop();
    }
    cout << endl;

    return 0;
}
