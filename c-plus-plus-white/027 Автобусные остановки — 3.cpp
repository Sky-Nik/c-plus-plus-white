#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {
	map<set<string>, int> path_to_number;
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int n;
		cin >> n;
		set<string> path;
		for (int i = 0; i < n; ++i) {
			string stop;
			cin >> stop;
			path.insert(stop);
		}
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