#include <iostream>
#define MAX 10

using namespace std;

int arr[MAX];
bool visit[MAX];

int N, M;

void dfs(int cnt, int idx) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';

	}

	for (int i = idx; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = true;
			arr[cnt] = i;
			dfs(cnt + 1, i + 1);
			visit[i] = false;
		}
	}

}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;

	dfs(0,1);

	return 0;
}
