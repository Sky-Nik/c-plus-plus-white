#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(begin(v), end(v), [](string x, string y) -> bool { 
		string s = x, t = y; 
		transform(begin(s), end(s), begin(s), [](char c) -> char { return char(tolower(int(c))); });
		transform(begin(t), end(t), begin(t), [](char c) -> char { return char(tolower(int(c))); });
		return s < t; 
	});
	for (int i = 0; i < n; ++i) cout << v[i] << " ";
	return 0;
}