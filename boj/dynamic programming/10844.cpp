#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MOD 1000000000

int dp[101];
int step[101][10];
int main(void) {
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int i = 1; i <= 9; i++) {
		step[1][i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				step[i][j] = (step[i-1][j + 1])%MOD;
			}
			else if (j == 9) {
				step[i][j] = (step[i-1][j - 1])%MOD;
			}
			else {
				step[i][j] = (step[i-1][j - 1] + step[i-1][j + 1])%MOD;
			}
		}
	}

	long long result=0;
	for (int i = 0; i <= 9; i++) {
		result += step[N][i];
	}
	cout << result % MOD;
	return 0;
}
