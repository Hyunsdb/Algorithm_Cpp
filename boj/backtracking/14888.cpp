#include <iostream>
using namespace std;

int oper[4] = { 0, };
int arr[11] = { 0, };
int N;
int result;
int MAX = -1000000001;
int MIN = 1000000001;

void gogo(int result,int idx) {
	if (idx == N) {
		if (result > MAX) MAX = result;
		if (result < MIN) MIN = result;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (oper[i] > 0) {
			oper[i]--;
			if (i == 0)
				gogo(result + arr[idx], idx + 1);
			else if(i==1)
				gogo(result - arr[idx], idx + 1);
			else if(i==2)
				gogo(result * arr[idx], idx + 1);
			else 
				gogo(result / arr[idx], idx + 1);
			oper[i]++;
		}
	}

}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;
	}
	
	for (int i = 0; i < 4; i++) {
		int tmp;
		cin >> tmp;
		oper[i] = tmp;
	}
	gogo(arr[0], 1);
	cout << MAX << '\n' << MIN;

	return 0;
}
