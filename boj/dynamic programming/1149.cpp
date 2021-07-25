#include <iostream>
#include <algorithm>

using namespace std;

int house[1001][3];
int cost[1001][3];
int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> house[i][0] >> house[i][1] >> house[i][2];
	}

	cost[0][0] = house[0][0];
	cost[0][1] = house[0][1];
	cost[0][2] = house[0][2];

	for (int i = 1; i < N; i++) {
		cost[i][0] = min(cost[i - 1][1], cost[i - 1][2]) + house[i][0];
		cost[i][1] = min(cost[i - 1][0], cost[i - 1][2]) + house[i][1];
		cost[i][2] = min(cost[i - 1][0], cost[i - 1][1]) + house[i][2];

	}

	cout << min({ cost[N - 1][0], cost[N - 1][1], cost[N - 1][2] }); //min함수에 배열 인자를 넘긴 것.

	return 0;
}
