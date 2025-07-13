#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find length of Longest Common Subsequence
int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();

    // Create a DP table (m+1) x (n+1)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the DP table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s1 = "abcde";
    string s2 = "ace";
    cout << "Length of Longest Common Subsequence: " << longestCommonSubsequence(s1, s2) << endl;
    return 0;
}
