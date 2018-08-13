#include <string>
#include <map>
#include <set>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
	set<string> s;
	for (auto is : m) s.insert(is.second);
	return s;
}