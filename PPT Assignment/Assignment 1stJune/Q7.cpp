#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    int size = nums.size();
    bool isIncreasing = true;
    bool isDecreasing = true;

    for (int i = 1; i < size; i++) {
        if (nums[i] > nums[i - 1]) {
            isDecreasing = false;
        } else if (nums[i] < nums[i - 1]) {
            isIncreasing = false;
        }

        if (!isIncreasing && !isDecreasing) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> nums = {1, 2, 2, 3};
    cout << boolalpha << isMonotonic(nums) << endl;
    return 0;
}
