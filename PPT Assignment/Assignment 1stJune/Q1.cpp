#include<bits/stdc++.h>
using namespace std;
int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    vector<int> nums = {1, 4, 3, 2};
    cout << arrayPairSum(nums) << endl;
    return 0;
}
