#include <iostream>
#define MAX 9

using namespace std;

int arr[MAX];
bool visit[MAX];

int N, M;

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}

	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = i;
			dfs(cnt+1);
			visit[i] = 0;
		}
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;
	
	dfs(0);

	return 0;
}
