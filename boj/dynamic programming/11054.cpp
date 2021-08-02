#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp1[1001]; 
int dp2[1001];

int arr[1001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	int ans = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	//앞에서부터 찾는 수열
	for (int i = 1; i <= N; i++) {
		dp1[i] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j])
				dp1[i] = max(dp1[i], dp1[j] + 1);
		}
		if (ans < dp1[i])
			ans = dp1[i];
	}

	//뒤에서부터 찾는 수열
	for (int i = N; i >= 1; i--) {
		dp2[i] = 1;
		for (int j = N; j > i; j--) {
			if (arr[i] > arr[j]) 
				dp2[i] = max(dp2[i], dp2[j] + 1);
			
		}
	}

	for (int i = 1; i <= N; i++) {
		if (ans < dp1[i] + dp2[i]-1) {
			ans = dp1[i] + dp2[i]-1;
		}
	}
	cout << ans;
	return 0;
}
