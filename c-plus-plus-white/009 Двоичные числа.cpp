#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	string s;
	while (N > 0) {
		s += to_string(N % 2);
		N >>= 1;
	}
	reverse(begin(s), end(s));
	cout << s;
	return 0;
}