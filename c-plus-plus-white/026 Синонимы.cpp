#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
	int Q;
	cin >> Q;
	map<string, set<string>> dict;
	for (int i = 0; i < Q; ++i) {
		string cmd;
		cin >> cmd;
		if (cmd == "ADD") {
			string word1, word2;
			cin >> word1 >> word2;
			dict[word1].insert(word2);
			dict[word2].insert(word1);
		}
		if (cmd == "COUNT") {
			string word;
			cin >> word;
			cout << dict[word].size() << "\n";
		}
		if (cmd == "CHECK") {
			string word1, word2;
			cin >> word1 >> word2;
			cout << (dict[word1].count(word2) ? "YES" : "NO" ) << "\n";
		}


	}
	return 0;
}