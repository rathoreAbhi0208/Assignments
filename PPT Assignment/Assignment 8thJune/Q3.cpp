#include <iostream>
#include <vector>

int minDistance(const std::string& word1, const std::string& word2) {
    int m = word1.length();
    int n = word2.length();

    // Initialize a 2D vector to store the minimum number of steps
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    // Fill the first row and first column of the dp table
    for (int i = 1; i <= m; i++) {
        dp[i][0] = i;
    }
    for (int j = 1; j <= n; j++) {
        dp[0][j] = j;
    }

    // Fill the remaining cells of the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i - 1] == word2[j - 1]) {
                // Characters match, no deletion required
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                // Characters don't match, take the minimum of deleting from word1 or word2
                dp[i][j] = 1 + std::min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    std::string word1 = "sea";
    std::string word2 = "eat";

    int result = minDistance(word1, word2);

    std::cout << "The minimum number of steps required is: " << result << std::endl;

    return 0;
}
