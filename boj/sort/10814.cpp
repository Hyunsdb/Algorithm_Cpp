#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	string s;
	int temp;

	vector<pair<pair<int, int>, string>> vec;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		cin >> s;
 
		vec.push_back({ { temp,i },s });
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; i++) {
		cout << vec[i].first.first << " " << vec[i].second << '\n';
	}

	return 0;
}
