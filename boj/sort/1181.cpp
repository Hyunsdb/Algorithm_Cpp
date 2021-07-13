#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const string a, const string b) {
	if (a.length() == b.length())
		return a < b;
	else return a.length() < b.length();

}

int main() {
	vector<string> v;
	int N;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if(find(v.begin(), v.end(), str)==v.end())
			v.push_back(str);
	}
	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		cout << '\n';
	}
	return 0;
}
