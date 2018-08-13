#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(begin(v), end(v), [](int x, int y) -> int { return abs(x) < abs(y); });
	for (int i = 0; i < n; ++i) cout << v[i] << " ";
	return 0;
}