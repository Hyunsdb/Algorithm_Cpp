#include <iostream>
using namespace std;

long long dp[101] = { 1,2,2 };

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T,N;	
	cin >> T;

	for (int i = 3; i < 101; i++) {
		dp[i] = dp[i - 3] + dp[i - 2];
	}

	while (T--) {
		cin >> N;
		
		if (N <= 3) cout << "1\n";
		else cout << dp[N-3] << '\n';
	}
	
	return 0;
}
