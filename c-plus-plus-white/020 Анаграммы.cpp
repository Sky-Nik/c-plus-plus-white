#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	string s, t;
	for (int i = 0; i < N; ++i) {
		cin >> s >> t;
		sort(begin(s), end(s));
		sort(begin(t), end(t));
		cout << (s == t ? "YES\n" : "NO\n");
	}
	return 0;
}