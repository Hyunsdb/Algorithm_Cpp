#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[1001];
int arr[1001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	int ans = 1;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		dp[i] = 1;

		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		if (dp[i] > ans) {
			ans = dp[i];
		}

	}


	cout << ans;
	
	return 0;
}
