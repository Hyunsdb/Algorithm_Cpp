#include <iostream>
using namespace std;

int arr[9];
bool visit[9];
int N, M;
int cnt, num;

void dfs(int num, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = num; i <= N; i++) {
			arr[cnt] = i;
			dfs(i,cnt + 1);
	}

}

int main() {

	cin >> N >> M;

	dfs(1,0);
	return 0;
}
