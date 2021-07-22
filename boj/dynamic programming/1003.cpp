#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, T;
	cin >> T;

	int arr[42];
	arr[0] = 1;
	arr[1] = 0;

	for (int i = 2; i < 42; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	while (T--) {
		cin >> N;
		if (N == 0) {
			cout << "1 0\n";
		}
		else if (N == 1) {
			cout << "0 1\n";
		}
		else{
			cout << arr[N] << ' ' << arr[N + 1]<<'\n';
		}
	}
	return 0;
}
