#include <iostream>
#include <algorithm>

using namespace std;

int arr[501][501];
int dp[501][501];

int main(void) {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j<=i; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			}
			if (j == i) {
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
			}
		}
	}
	
	int answer = 0;
	for (int i = 1; i <= N; i++) {
		answer = max(dp[N][i], answer);
	}
	cout << answer;

	return 0;
}
