#include <iostream>
#include <vector>
using namespace std;

char arr[53][53];

int min(int a, int b) {
	return a > b ? b : a;
}

int main() {
	int N, M;
	int result = 999;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}

	for (int n = 0; n <= N - 8; n++) {
		for (int m = 0; m <= M - 8; m++) {
			int cnt = 0;
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (i % 2 == 0) {
						if (j % 2 == 0 && arr[n + i][m + j] == 'B') cnt++;
						else if (j % 2 == 1 && arr[n + i][m + j] == 'W') cnt++;
					}
					else {
						if (j % 2 == 0 && arr[n + i][m + j] == 'W') cnt++;
						else if (j % 2 == 1 && arr[n + i][m + j] == 'B') cnt++;
					}
				}
			}
			cnt = min(cnt, 64 - cnt);
			result = min(cnt, result);
		}
	}

	cout << result;
	return 0;
}
