#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[10001];
int arr[10001];
int main(void) {
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1]+arr[2];
	dp[3] = max({ arr[1] + arr[2], arr[1] + arr[3],arr[2]+arr[3] });
	for (int i = 4; i <= N; i++) {
		dp[i] = max({ dp[i - 2]+arr[i], dp[i - 3] + arr[i - 1] + arr[i], dp[i - 1] });
	}
	cout << dp[N];
	return 0;
}
