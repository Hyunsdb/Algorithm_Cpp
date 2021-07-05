#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int num = 665;
	int cnt = 0;

	while (cnt != N) {
		int temp = ++num;
		while (temp>=666) {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			temp /= 10;
		}
	}

	cout << num;


	return 0;
}
