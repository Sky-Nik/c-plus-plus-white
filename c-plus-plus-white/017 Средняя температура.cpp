#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> t(N);
	for (int i = 0; i < N; ++i) cin >> t[i];
	int am = accumulate(begin(t), end(t), 0) / N;
	int k = 0;
	vector<int> p;
	for (int i = 0; i < N; ++i) {
		if (t[i] > am) {
			p.push_back(i);
			++k;
		}
	}
	cout << k << "\n";
	for (int pi : p) cout << pi << " ";
	return 0;
}