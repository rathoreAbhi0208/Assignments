#include <iostream>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string num) {
    unordered_map<char, char> strobogrammaticPairs{
        {'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}
    };

    int left = 0;
    int right = num.length() - 1;

    while (left <= right) {
        char leftDigit = num[left];
        char rightDigit = num[right];

        if (strobogrammaticPairs.find(leftDigit) == strobogrammaticPairs.end() ||
            strobogrammaticPairs[leftDigit] != rightDigit) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string num = "88";

    if (isStrobogrammatic(num)) {
        cout << "The number is strobogrammatic." << endl;
    } else {
        cout << "The number is not strobogrammatic." << endl;
    }

    return 0;
}
