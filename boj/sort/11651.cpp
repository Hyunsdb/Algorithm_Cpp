#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}

int main() {
	vector<pair<int, int>> v;
	int N;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
