#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(const string& S) {
    stack<char> stack;
    string reversedString;

    // Push each character onto the stack
    for (char ch : S) {
        stack.push(ch);
    }

    // Pop each character from the stack and append it to the reversed string
    while (!stack.empty()) {
        reversedString += stack.top();
        stack.pop();
    }

    return reversedString;
}

int main() {
    string S = "GeeksforGeeks";
    string reversedString = reverseString(S);

    // Output the reversed string
    cout << reversedString << endl;

    return 0;
}
