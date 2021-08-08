#include <stdio.h>

int main() {
	int A[10000];
	int N, K;
	int result = 0;
	int d;

	scanf("%d %d", &N, &K);

	
	for (int i = 0; i <N; i++) {
		scanf("%d",&A[i]);
	}

	for (int i = N-1; i>=0; i--) {
		d = K / A[i];
		result += d;
		K -= d*A[i];
	}
	printf("%d", result);

	return 0;
}
