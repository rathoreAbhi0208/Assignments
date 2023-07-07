#include <iostream>
#include <algorithm>
using namespace std;

string reverseStr(string s, int k) {
    int n = s.length();

    for (int i = 0; i < n; i += 2 * k) {
        int start = i;
        int end = min(i + k - 1, n - 1); // Calculate the end index of the substring to reverse

        // Reverse the characters in the substring
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    return s;
}

int main() {
    string s = "abcdefg";
    int k = 4;

    string reversed = reverseStr(s, k);

    cout << "Reversed: " << reversed << endl;

    return 0;
}
