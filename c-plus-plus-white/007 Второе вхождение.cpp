#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	auto pos = find(begin(s), end(s), 'f');
	if (pos == end(s)) cout << -2;
	else {
		auto pos2 = find(++pos, end(s), 'f');
		if (pos2 == end(s)) cout << -1;
		else cout << pos2 - begin(s);
	}

	return 0;
}