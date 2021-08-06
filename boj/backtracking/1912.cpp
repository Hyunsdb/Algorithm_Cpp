#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[100001];
int dp[100001];
int result;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	dp[0] = arr[0];
	result = dp[0];
	for (int i = 1; i < N; i++) {
		dp[i] = max(arr[i], dp[i-1] + arr[i]);
		result = max(result, dp[i]);
	}

	for (int i = 0; i < N; i++) {
	}

	cout << result;
	return 0;
}
