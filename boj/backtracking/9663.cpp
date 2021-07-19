#include <iostream>
using namespace std;
#define MAX 40

bool isused1[MAX]; //열 y
bool isused2[MAX]; //좌측하단 우측상단 연결 대각선. x+y
bool isused3[MAX]; //좌측상단 우측하단 연결 대각선. x-y+n-1(n-1은 인덱스를 음수로 보내지 않기 위해)

int N, result;

void func(int cur) {
	if (cur == N) {
		result++;
	}

	for (int i = 0; i < N; i++) {
		if (isused1[i] || isused2[cur + i] || isused3[cur - i + N + 1]) {
			continue;
		}
		isused1[i] = 1;
		isused2[cur + i] = 1;
		isused3[cur - i + N + 1] = 1;
		func(cur + 1);
		isused1[i] = 0;
		isused2[cur + i] = 0;
		isused3[cur - i + N + 1] = 0;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;

	func(0);

	cout << result;
	return 0;
}
