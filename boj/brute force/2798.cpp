#include <iostream>
#include <vector>
using namespace std;

int arr[101];
int main() {
	int N, M;
	int ans = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int s = j+1; s < N; s++) {
				int sum = arr[i] + arr[j] + arr[s];
				if (sum<=M && sum>ans) ans = sum;
			}
		}
	}

	cout << ans;
	return 0;
}
