#include <iostream>
using namespace std;

void pairSum(int nums[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indices: " << i << ", " << j << endl;
                return;
            }
        }
    }
    cout << "No solution found." << endl;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 18;
    int size = sizeof(nums) / sizeof(nums[0]);

    pairSum(nums, size, target);

    return 0;
}