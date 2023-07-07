#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxProduct = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int negativeProduct = nums[0] * nums[1] * nums[n - 1];
    return max(maxProduct, negativeProduct);
}

int main() {
    vector<int> nums = {1, 2, 3};
    cout << maximumProduct(nums) << endl;
    return 0;
}
