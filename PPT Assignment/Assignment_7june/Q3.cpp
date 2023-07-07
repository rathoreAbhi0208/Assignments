#include <iostream>
using namespace std;

string addStrings(string num1, string num2) {
    string result;
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry != 0) {
        if (i >= 0) {
            carry += num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            carry += num2[j] - '0';
            j--;
        }
        result = to_string(carry % 10) + result;
        carry /= 10;
    }

    return result;
}

int main() {
    string num1 = "115";
    string num2 = "123";

    string sum = addStrings(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}
