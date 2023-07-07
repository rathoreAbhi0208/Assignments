#include <bits/stdc++.h>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Sort the array in ascending order
    int closestSum = INT_MAX; // Initialize closestSum to a large value
    
    for (int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (abs(sum - target) < abs(closestSum - target)) {
                closestSum = sum;
            }
            
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                return target;
            }
        }
    }
    
    return closestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    
    int result = threeSumClosest(nums, target);
    
    cout << "Closest Sum: " << result << endl;
    
    return 0;
}
