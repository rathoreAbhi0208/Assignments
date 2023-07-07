#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; // Number of elements not equal to val

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move the element to the k-th position
            k++; // Increment k for each element not equal to val
        }
    }

    return k;
}

int main() {
    vector<int> nums = { 3, 2, 2, 3 };
    int val = 2;

    int k = removeElement(nums, val);

    cout << "k: " << k << ", nums: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
