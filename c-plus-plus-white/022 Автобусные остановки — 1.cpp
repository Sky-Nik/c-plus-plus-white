#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
	int Q;
	cin >> Q;
	map<string, vector<string>> b_to_s;
	map<string, vector<string>> s_to_b;
	for (int i = 0; i < Q; ++i) {
		string cmd;
		cin >> cmd;
		if (cmd == "NEW_BUS") {
			string bus;
			int stop_count;
			cin >> bus >> stop_count;
			for (int i = 0; i < stop_count; ++i) {
				string stopi;
				cin >> stopi;
				b_to_s[bus].push_back(stopi);
				s_to_b[stopi].push_back(bus);
			}
		}
		if (cmd == "BUSES_FOR_STOP") {
			string stop;
			cin >> stop;
			if (s_to_b.count(stop) == 0) cout << "No stop\n";
			else for (string bus : s_to_b[stop]) cout << bus << " ";
		}
		if (cmd == "STOPS_FOR_BUS") {
			string bus;
			cin >> bus;
			if (b_to_s.count(bus) == 0) {
				cout << "No bus\n";
			}
			else {
				for (string stop : b_to_s[bus]) {
					if (s_to_b[stop].size() == 1) {
						cout << "Stop " << stop << ": no interchange\n";
					}
					else {
						cout << "Stop " << stop << ": ";
						for (string other_bus : s_to_b[stop]) if (other_bus != bus) cout << other_bus << " ";
						cout << "\n";
					}
				}
			}
		}
		if (cmd == "ALL_BUSES") {
			if (b_to_s.size() == 0) {
				cout << "No buses\n";
			}
			else {
				for (auto busstops : b_to_s) {
					cout << "Bus " << busstops.first << ": ";
					for (string stop : busstops.second) cout << stop << " ";
					cout << "\n";
				}
			}
		}
	}
	return 0;
}