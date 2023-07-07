#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int maxCandies(vector<int>& candyType) {
    unordered_set<int> uniqueCandies;
    for (int candy : candyType) {
        uniqueCandies.insert(candy);
    }
    int maxCandies = min(uniqueCandies.size(), candyType.size() / 2);
    return maxCandies;
}

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    cout << maxCandies(candyType) << endl;
    return 0;
}
