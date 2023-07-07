#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q1, q2;

public:
    void push(int val) {
        q1.push(val);
    }

    int pop() {
        if (q1.empty())
            return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int poppedElement = q1.front();
        q1.pop();

        swap(q1, q2);

        return poppedElement;
    }

    int top() {
        if (q1.empty())
            return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();

        q2.push(q1.front());
        q1.pop();

        swap(q1, q2);

        return topElement;
    }

    bool isEmpty() {
        return q1.empty() && q2.empty();
    }
};

int main() {
    Stack stack;
    stack.push(2);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    stack.push(3);

    return 0;
}
