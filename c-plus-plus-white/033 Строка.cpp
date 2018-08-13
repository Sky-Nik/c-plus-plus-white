#include <algorithm>
#include <string>

using namespace std;

class ReversibleString {
public:
	void Reverse() {
		reverse(begin(s), end(s));
	}
	string ToString() const {
		return s;
	}
	ReversibleString() {
		s = "";
	}
	ReversibleString(string str) {
		s = str;
	}
private:
	string s;
};