#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<string> words;

    // Split the string into words
    stringstream ss(s);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the characters in each word
    for (string& word : words) {
        reverse(word.begin(), word.end());
    }

    // Join the reversed words into a new string
    string reversedString;
    for (const string& word : words) {
        reversedString += word + " ";
    }

    // Remove the trailing space
    reversedString.pop_back();

    return reversedString;
}

int main() {
    string s = "Let's take LeetCode contest";
    string reversed = reverseWords(s);

    cout << "Reversed: " << reversed << endl;

    return 0;
}
