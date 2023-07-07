#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            return digits;
        }
    }

    // If all digits are 9, add an additional digit at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    vector<int> digits = {1, 2, 9};

    vector<int> result = plusOne(digits);

    cout << "Result: ";
    for (int digit : result)
    {
        cout << digit << " ";
    }
    return 0;
}
