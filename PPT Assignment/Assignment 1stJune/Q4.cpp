#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();
    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
            count++;
            flowerbed[i] = 1;
        }
    }
    return count >= n;
}

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    cout << boolalpha << canPlaceFlowers(flowerbed, n) << endl;
    return 0;
}
