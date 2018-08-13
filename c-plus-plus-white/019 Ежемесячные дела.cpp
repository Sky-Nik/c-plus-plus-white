#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main() {
	int Q;
	cin >> Q;
	vector<int> d{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int cm = 0;
	vector<vector<string>> tasks(*max_element(begin(d), end(d)));
	for (int i = 0; i < Q; ++i) {
		string cmd;
		cin >> cmd;
		if (cmd == "ADD") {
			int i;
			string s;
			cin >> i >> s;
			tasks[i - 1].push_back(s);
		}
		if (cmd == "NEXT") {
			int nm = (cm + 1) % 12;
			for (int i = d[nm]; i < d[cm]; ++i) {
				tasks[d[nm] - 1].insert(end(tasks[d[nm] - 1]), begin(tasks[i]), end(tasks[i]));
				tasks[i].clear();
			}
			cm = nm;
		}
		if (cmd == "DUMP") {
			int i;
			cin >> i;
			if (i - 1 < d[cm]) {
				cout << tasks[i - 1].size() << " ";
				for (string s : tasks[i - 1]) cout << s << " ";
				cout << "\n";
			}
		}
	}


	return 0;
}