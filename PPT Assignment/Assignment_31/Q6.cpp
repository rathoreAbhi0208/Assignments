#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num) > 0) {
            return true; // Duplicate found
        }
        seen.insert(num);
    }

    return false; // No duplicates found
}

int main() {
    vector<int> nums = { 1, 2, 5, 3 };

    bool hasDuplicates = containsDuplicate(nums);

    cout << "Has Duplicates: " << boolalpha << hasDuplicates << endl;

    return 0;
}
