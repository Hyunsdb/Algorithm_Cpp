#include <iostream>

using namespace std;

int N;
int arr[21][21];
bool visit[21]; //팀 결정 위해 필요한 배열
int team1[10], team2[10];
int ans = 0x7fffffff; //ans가 가질 수 있는 최댓값


void result() {
	int size1 = 0, size2 = 0;
	for (int i = 0; i < N; i++) { //visit배열로 0이면 팀1, 0이면 팀2로 나눈다.
		if (!visit[i])
			team1[size1++] = i;
		else team2[size2++] = i;
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < N/2; i++) {
		for (int j = i + 1; j < N / 2; j++) {
			sum1 += arr[team1[i]][team1[j]] + arr[team1[j]][team1[i]];
			sum2 += arr[team2[i]][team2[j]] + arr[team2[j]][team2[i]];
		}
	}
	if (ans > abs(sum1 - sum2))
		ans = abs(sum1 - sum2);
}

void dfs(int cnt, int cur) {
	if (cnt == (N / 2)) {
		result();
		return;
	}
	for (int i = cur; i < N; i++) {
		visit[i] = true;
		dfs(cnt + 1, i + 1);
		visit[i] = false;
	}
}

int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	dfs(0, 0);

	cout << ans;

	return 0;
}
