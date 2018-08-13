#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
	map<vector<string>, int> path_to_number;
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int n;
		cin >> n;
		vector<string> path(n);
		for (int i = 0; i < n; ++i) cin >> path[i];
		if (path_to_number.count(path) == 0) {
			path_to_number[path] = path_to_number.size();
			cout << "New bus " << path_to_number[path] << "\n";
		}
		else {
			cout << "Already exists for " << path_to_number[path] << "\n";
		}
	}
	return 0;
}