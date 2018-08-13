#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	int N;
	cin >> N;
	set<string> s;
	string t;
	for (int i = 0; i < N; ++i) {
		cin >> t;
		s.insert(t);
	}
	cout << s.size();
	return 0;
}