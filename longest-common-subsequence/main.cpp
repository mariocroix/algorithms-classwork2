#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestCommonSubsequence(const string& A, const string& B) {
    int m = A.size();
    int n = B.size();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string A = "algorithm";
    string B = "rhythm";

    int lcsLength = longestCommonSubsequence(A, B);
    cout << "Length of the LCS: " << lcsLength << endl;

    return 0;
}
