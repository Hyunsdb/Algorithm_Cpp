#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int>b) {
	if (a.second != b.second) {
		return a.second < b.second;
	}
	return a.first < b.first;
}
int main() {
	int N;
	cin >> N;
	int x, y;
	vector<pair<int, int>> vec;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		vec.push_back({x, y});
	}

	sort(vec.begin(), vec.end());

	int vsize = vec.size();
	for (int i = 0; i < vsize; i++) {
		cout << vec[i].first << ' ' << vec[i].second << "\n";
	}
	return 0;
}
