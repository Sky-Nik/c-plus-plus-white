#include <iostream>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<bool> q;
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		string cmd;
		cin >> cmd;
		if (cmd == "WORRY") {
			int i;
			cin >> i;
			q[i] = true;
		}
		if (cmd == "QUIET") {
			int i; 
			cin >> i;
			q[i] = false;
		}
		if (cmd == "COME") {
			int k;
			cin >> k;
			if (k > 0) for (int i = 0; i < k; ++i) q.push_back(false);
			else for (int i = 0; i > k; --i) q.pop_back();
		}
		if (cmd == "WORRY_COUNT") {
			cout << accumulate(begin(q), end(q), 0) << "\n";
		}
	}

	return 0;
}