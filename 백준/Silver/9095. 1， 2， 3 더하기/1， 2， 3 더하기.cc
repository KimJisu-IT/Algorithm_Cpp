#include <iostream>
#include <vector>
using namespace std;
/*
vector<int> dp;

int plus(int n) {
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= 11; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	return dp[n];
}

*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t, n;
	vector<int> dp(1000001);

	cin >> t;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= 11; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << dp[n] << "\n";
	}

	return 0;
}