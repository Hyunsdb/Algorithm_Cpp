#include <iostream>
using namespace std;

int arr[10002];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}

	for (int i = 1; i <=10000 ; i++) {
		while (arr[i]>0) {
			cout << i << '\n';
			arr[i]--;
		}
	}

	return 0;
}
