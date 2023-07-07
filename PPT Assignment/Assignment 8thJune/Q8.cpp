#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool buddyStrings(const string& s, const string& goal) {
    // Length of the strings should be the same for swapping
    if (s.length() != goal.length()) {
        return false;
    }

    // If the strings are equal, check if there are duplicate characters
    if (s == goal) {
        unordered_set<char> seen;
        for (char c : s) {
            if (seen.count(c)) {
                return true;
            }
            seen.insert(c);
        }
        return false;
    }

    int firstIndex = -1;
    int secondIndex = -1;
    int n = s.length();

    // Find the indices where characters differ
    for (int i = 0; i < n; i++) {
        if (s[i] != goal[i]) {
            if (firstIndex == -1) {
                firstIndex = i;
            } else if (secondIndex == -1) {
                secondIndex = i;
            } else {
                return false; // More than two indices differ
            }
        }
    }

    // Check if swapping the characters at the found indices results in goal
    return (secondIndex != -1 && s[firstIndex] == goal[secondIndex] && s[secondIndex] == goal[firstIndex]);
}

int main() {
    string s = "ab";
    string goal = "ba";

    bool result = buddyStrings(s, goal);

    if (result) {
        cout << "You can swap two letters in 's' to get 'goal'." << endl;
    } else {
        cout << "You cannot swap two letters in 's' to get 'goal'." << endl;
    }

    return 0;
}
