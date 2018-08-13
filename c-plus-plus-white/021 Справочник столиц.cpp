#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int Q;
	cin >> Q;
	map<string, string> c;
	for (int i = 0; i < Q; ++i) {
		string cmd;
		cin >> cmd;
		if (cmd == "CHANGE_CAPITAL") {
			string co, nc;
			cin >> co >> nc;
			if (c.count(co) == 0) {
				cout << "Introduce new country " << co << " with capital " << nc << "\n";
				c[co] = nc;
			}
			else {
				if (c[co] == nc) {
					cout << "Country " << co << " hasn't changed its capital\n";
				}
				else {
					cout << "Country " << co << " has changed its capital from " << c[co] << " to " << nc << "\n";
					c[co] = nc;
				}
			}
		}
		if (cmd == "RENAME") {
			string oc, nc;
			cin >> oc >> nc;
			if (c.count(oc) == 0 || oc == nc || c.count(nc) != 0) {
				cout << "Incorrect rename, skip\n";
			}
			else {
				cout << "Country " << oc << " with capital " << c[oc] << " has been renamed to " << nc << "\n";
				c[nc] = c[oc];
				c.erase(oc);
			}
		}
		if (cmd == "ABOUT") {
			string co;
			cin >> co;
			if (c.count(co) == 0) {
				cout << "Country " << co << " doesn't exist\n";
				c.erase(co);
			}
			else {
				cout << "Country " << co << " has capital " << c[co] << "\n";
			}
		}
		if (cmd == "DUMP") {
			if (c.size() == 0) {
				cout << "There are no countries in the world\n";
			}
			else {	
				for (auto coca : c) {
					cout << coca.first << "/" << coca.second << " ";
				}
				cout << "\n";
			}
		}
	}
	return 0;
}