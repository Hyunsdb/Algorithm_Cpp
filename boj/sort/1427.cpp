#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int N;
	int temp;
	int len;
	vector<int> vec;
	cin >> N;
	while (N>0) {
		temp = N % 10;
		N /= 10;
		
		vec.push_back(temp);
	}
	
	sort(vec.begin(), vec.end());

	len = vec.size();
	for (int i = len-1; i >=0 ; i--) {
		cout << vec[i];
	}


	return 0;
}
