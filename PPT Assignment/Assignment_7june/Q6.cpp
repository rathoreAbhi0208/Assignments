#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) {
        return false;
    }

    string concat = s + s;

    return concat.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    if (rotateString(s, goal)) {
        cout << "The string can be formed after some shifts." << endl;
    } else {
        cout << "The string cannot be formed after any number of shifts." << endl;
    }

    return 0;
}
