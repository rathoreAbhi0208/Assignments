#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left <= right) {
        int middle = left + (right - left) / 2;
        
        if (nums[middle] == target) {
            return middle;
        } else if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    
    return left;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    
    int index = searchInsert(nums, target);
    
    cout << "Target Index: " << index << endl;
    
    return 0;
}
